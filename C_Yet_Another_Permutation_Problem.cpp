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
    ll n;
    cin >> n;
    vector<ll> tm;
    set<ll> s;
    for (ll i = 2; i <= n; i++)
    {
        ll p = i, j = 2;
        while (p <= n)
        {
            if (!s.count(p))
            {
                tm.pb(p);
                s.insert(p);
            }
            p = p * j;
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        if (!s.count(i))
        {
            tm.pb(i);
        }
    }

    for (ll &x : tm)
    {
        cout << x << " ";
    }
    cout << '\n';
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