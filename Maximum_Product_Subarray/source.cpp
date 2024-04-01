#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ll t;
    // cin >> t;
    while (t--) {
        ll n; cin >> n;
        if (n == 0) {
            cout << 0 << endl;
            continue;
        }
        ll a[n];
        for (int i = 0;i < n;i++) cin >> a[i];
        int res = a[0];
        int mx = a[0], mn = a[0];

        for (int i = 1;i < n;i++)
        {
            if (a[i] < 0) {
                swap(mx, mn);
            }

            mx = max(a[i], a[i] * mx);
            mn = min(a[i], a[i] * mn);
            res = max(res, mx);
        }
        cout << res << endl;;
    }
    return 0;
}
