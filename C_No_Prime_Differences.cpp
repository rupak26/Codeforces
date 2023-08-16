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
bool isprime(ll x)
{
    for (ll i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a[n];
    ll f = 1;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            a[i].pb(f);
            f++;
        }
    }
    if (isprime(m))
    {
        vector<ll> tmp[n + 1];
        ll k = 2, l = 1;
        for (ll i = 0; i < n / 2; i++)
        {
            for (ll j = 0; j < sz(a[i]); j++)
            {
                tmp[k].pb(a[i][j]);
            }
            k += 2;
        }
        for (ll i = n / 2; i < n; i++)
        {
            for (ll j = 0; j < sz(a[i]); j++)
            {
                tmp[l].pb(a[i][j]);
            }
            l += 2;
        }
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 0; j < sz(tmp[i]); j++)
            {
                cout << tmp[i][j] << " ";
            }
            cout << '\n';
        }
        return;
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < sz(a[i]); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
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