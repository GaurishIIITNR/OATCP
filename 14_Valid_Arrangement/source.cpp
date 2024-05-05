#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void euler_tour(unordered_map<int, stack<int>>& adj, vector<vector<int>>& ans, int src) {
    auto& stk = adj[src];

    while (!stk.empty()) {
        int nbr = stk.top();
        stk.pop();
        euler_tour(adj, ans, nbr);
        ans.push_back({ src, nbr });
    }
}

vector<vector<int>> valid_arrangement(vector<vector<int>>& pr) {
    int m = pr.size();

    unordered_map<int, stack<int>> adj;
    unordered_map<int, int> in;
    unordered_map<int, int> out;

    adj.reserve(m); in.reserve(m); out.reserve(m);

    for (int i = 0; i < m; i++) {
        int u = pr[i][0], v = pr[i][1];
        in[v]++; out[u]++; adj[u].push(v);
    }

    int start = -1;

    for (auto& p : adj) {
        int i = p.first;
        if (out[i] - in[i] == 1) start = i;
    }

    if (start == -1) {
        start = adj.begin()->first;
    }

    vector<vector<int>> ans;
    euler_tour(adj, ans, start);
    reverse(ans.begin(), ans.end());

    return ans;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    vector<vector<int>> pr(n, vector<int>(2));

    for (ll i = 0; i < n; i++) {
        cin >> pr[i][0] >> pr[i][1];
    }

    vector<vector<int>> ans = valid_arrangement(pr);

    if (ans.size() != n) {
        cout << "Not Possible\n";
        return 0;
    }

    for (auto i : ans) {
        cout << i[0] << " " << i[1] << "\n";
    }
}
