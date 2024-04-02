#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> dp(1000005, -1);
ll m = (1e+9) + 7;

ll f(ll n)
{
    if (n < 0)
        return 0;
        
    if (n == 0)
        return 1;
        
    if (dp[n] != -1)
        return dp[n];
        
    ll p = f(n - 1) + f(n - 2) + f(n - 3) + f(n - 4) + f(n - 5) + f(n - 6);
    dp[n] = p % m;
    
    return p;
}

int main()
{
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        dp[0] = 1;
        ll n;
        cin >> n;
        cout << f(n) % m;
    }

}
