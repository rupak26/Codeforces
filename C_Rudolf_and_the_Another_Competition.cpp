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
    ll n, m, h;
    cin >> n >> m >> h;
    for (ll i = 0; i < n; i++)
    {
        vector<ll> v;
        for (ll j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            v.pb(x);
        }
        sort(all(v));
        ll id = -1, sum = 0;
        vector<ll> tm(m, 0);
        tm[0] = v[0];
        for (ll j = 1; j < m; j++)
        {
            tm[j] = tm[j - 1] + v[j];
        }
        for (ll j = 0; j < m; j++)
        {
            if (tm[j] > h)
            {
                id = j - 1;
                break;
            }
        }
        if (id == -1)
        {
            id = m - 1;
        }
        for (ll j = 0; j < id + 1; j++)
        {
            sum += tm[j];
        }

        tot.pb({{id + 1, sum}, i + 1});
        // cout << id + 1 << " " << sum << " " << i + 1 << '\n';
    }
    sort(all(tot), cm);
    ll cnt = 0;
    for (auto &x : tot)
    {
        ++cnt;
        if (x.sc == 1)
        {
            break;
        }
    }
    cout << cnt << '\n';
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