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
const ll N = 200100;
vector<ll> a;
ll n, k;
bool sol(ll x)
{
    ll j = 0, h = 0;
    for (ll i = 0; i < k; i++)
    {
        while (a[j] <= x + i)
        {
            j++;
        }
        h += j;
    }
    return h;
}
void solve()
{
    cin >> n >> k;
    a.resize(n);
    for (ll &x : a)
    {
        cin >> x;
    }
    ll l = 0, r = n * k + 1, ans = 0;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        if (sol(m))
        {
            ans = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
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