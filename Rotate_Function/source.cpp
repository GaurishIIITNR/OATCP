#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ll t = 1;
    // cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<ll>a(n);
        for (int i = 0;i < n;i++) {
            cin >> a[i];
        }
        if (n <= 0) {
            cout << 0 << endl;
            // continue;
            return 0;
        }
        vector<int>dp(n);
        ll sum = 0;
        for (int i = 0;i < n;i++) {
            sum += a[i];
            dp[0] += (i * a[i]);

        }
        ll ans = dp[0];

        // int ind = n - 1;
        for (int i = 1;i < n;i++) {
            dp[i] = sum + dp[i - 1] - (n * a[n - i]);
            // ind--;
            ans = max((ll)dp[i], ans);
        }

        cout<<ans<<endl;
    }
    return 0;
}
