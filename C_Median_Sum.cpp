#include <bits/stdc++.h>
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define fr first
#define sc second
#define pii pair<int, int>
using ll = long long;
inline ll vin()
{
    ll x;
    std::cin >> x;
    return x;
}
using namespace std;

void solve()
{
    // hoise jodi sum kom takto
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (ll &x : a)
    {
        cin >> x;
        sum += x;
    }
    sort(all(a));
    vector<vector<ll>> dp(n, vector<ll>(sum + 1, 0));
    for (ll i = 0; i < n; i++)
    {
        dp[i][0] = 1;
    }
    dp[0][a[0]] = 1;

    for (ll i = 1; i < n; i++)
    {
        for (ll j = 1; j <= sum; j++)
        {
            if (j >= a[i])
            {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - a[i]];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    vector<ll> sub;
    for (ll i = 1; i <= sum; i++)
    {
        ll x = dp[n - 1][i];
        for (ll j = 1; j <= x; j++)
        {
            sub.pb(i);
        }
    }

    ll x = sz(sub);
    cout << sub[x / 2] << '\n';
}
int main()
{
    int t = 1;
    while (t--)
    {
        solve();
    }
}