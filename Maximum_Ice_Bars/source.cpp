#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    int n; cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int coin; cin >> coin;

    sort(v.begin(), v.end());

    int ans = 0;

    for (auto x : v) {
        if (coin >= x) {
            ans++; coin -= x;
        }
        else break;
    }

    cout << ans << endl;
}
