#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<vector<ll>> dp(1001, vector<ll>(1001, -1));
ll m = (1e+9) + 7;
ll f(vector<vector<char>> &v, ll i, ll j)
{
    if (i >= v.size() || j >= v.size())
        return 0;
    if (v[i][j] == '*')
        return 0;
    if (i == v.size() - 1 && j == v.size() - 1)
        return 1;
    if (dp[i][j] != -1)
        return dp[i][j];
    ll p = f(v, i, j + 1);
    p += f(v, i + 1, j);
    dp[i][j] = p % m;
    return (p % m);
}
int main()
{
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<vector<char>> v(n, vector<char>(n));
        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < n; j++)
                cin >> v[i][j];
        cout << f(v, 0, 0) % m;
    }

}
