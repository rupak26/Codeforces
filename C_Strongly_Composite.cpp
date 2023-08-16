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
vector<ll> rup(ll x)
{
    vector<ll> tm;
    for (ll i = 2; i * i <= x; i++)
    {
        while (x % i == 0)
        {
            tm.pb(i);
            x /= i;
        }
    }
    if (x != 1)
    {
        tm.pb(x);
    }
    return tm;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    // prime factorization
    for (ll &x : a)
    {
        cin >> x;
        vector<ll> f = rup(x);
        for (ll &l : f)
        {
            mp[l]++;
        }
    }
    ll res = 0, rem = 0;
    for (auto &x : mp)
    {
        res += x.sc / 2;
        rem += x.sc % 2;
    }
    cout << res + (rem / 3) << '\n';
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