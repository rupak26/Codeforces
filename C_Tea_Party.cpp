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
/*
  Never be afraid of implementing a O(n^2) solution .
  recheck edege case
  Think greedy
*/
ll custom_ceil(ll A, ll B)
{
    return ((A + B - 1) / B);
}
void solve()
{
    ll n, w;
    cin >> n >> w;
    vector<pair<ll, ll>> v;
    vector<ll> a(n), ans(n);
    for (ll &x : a)
    {
        cin >> x;
    }

    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll p = custom_ceil(a[i], 2);
        ans[i] = p;
        sum += p;
        v.pb({a[i], i});
    }

    if (sum > w)
    {
        puts("-1");
        return;
    }
    sort(all(v));
    w -= sum;
    for (ll i = n - 1; i >= 0; i--)
    {
        ll f = v[i].sc;
        if (w > 0)
        {
            ll x = min(a[f] - ans[f], w);
            ans[f] += x;
            w -= x;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << '\n';
}
int main()
{
    int t = 1;
    while (t--)
    {
        solve();
    }
}