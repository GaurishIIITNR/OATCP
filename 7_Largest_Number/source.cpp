#include <bits/stdc++.h>
using namespace std;
#define ll long long 

bool cmp(string& a, string& b) {
    return (a + b) >= (b + a);
}

string func(vector<int>& v) {
    vector<string>p;

    int c = 0;

    for (auto x : v) {
        if (x == 0)c++;
        else p.push_back(to_string(x));
    }

    if (p.size() == 0) return "0";
    sort(p.begin(), p.end(), cmp);

    string res = "";
    for (auto x : p) {
        res += x;
    }

    while (c > 0) {
        res += "0"; c--;
    }

    return res;
}

int main() {
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << func(v) << endl;
}
