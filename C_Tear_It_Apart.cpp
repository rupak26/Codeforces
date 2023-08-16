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
    string s;
    cin >> s;
    ll n = sz(s);
    vector<ll> v[26];
    for (ll i = 0; i < n; i++)
    {
        v[(ll)(s[i] - 'a')].pb(i);
    }
    ll ans = n;
    for (ll i = 0; i < 26; i++)
    {
        ll c = v[i].size();
        if (c == 0)
        {
            continue;
        }
        for (ll j = 0; j < c - 1; j++)
        {
            ll dif = v[i][j + 1] - v[i][j] + 1;
            ans = min(ans, __lg(dif) + 1);
        }
    }
    cout << ans << '\n';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}