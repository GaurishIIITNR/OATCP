#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int ford_fulkerson(vector<vector<int>>& g, int src, int snk) {
    int V = g.size();
    vector<vector<int>> rg = g;
    vector<int> par(V);
    int max_flow = 0;

    while (true) {
        fill(par.begin(), par.end(), -1);
        queue<int> q;
        q.push(src);
        par[src] = src;

        while (!q.empty()) {
            int u = q.front();
            q.pop();
            for (int v = 0; v < V; v++) {
                if (par[v] == -1 && rg[u][v] > 0) {
                    par[v] = u;
                    q.push(v);
                }
            }
        }

        if (par[snk] == -1) break;

        int path_flow = INT_MAX;
        for (int v = snk; v != src; v = par[v]) {
            int u = par[v];
            path_flow = min(path_flow, rg[u][v]);
        }

        for (int v = snk; v != src; v = par[v]) {
            int u = par[v];
            rg[u][v] -= path_flow;
            rg[v][u] += path_flow;
        }

        max_flow += path_flow;
    }

    return max_flow;
}

void add_edge(vector<vector<int>>& g, int u, int v, int w) {
    g[u][v] = w;
}

int main() {
    int V;  cin >> V;
    vector<vector<int>> g(V, vector<int>(V, 0));

    int s, t, n; cin >> s >> t >> n;

    for (int i = 0;i < n;i++) {
        int u, v, w; cin >> u >> v >> w;
        add_edge(g, u - 1, v - 1, w);
    }
    cout << "Max flow = " << ford_fulkerson(g, s - 1, t - 1) << endl;

    return 0;
}
