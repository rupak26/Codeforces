#include <bits/stdc++.h>
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define pb push_back
#define all(x) (x).begin(), (x).end()
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
    vector<ll> a(n);
    ll mx = -1e9;
    ll c = 0;
    for (ll &x : a)
    {
        cin >> x;
        if (x < 0)
            ++c;
        mx = max(mx, x);
    }

    ll s1 = 0, s2 = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i & 1)
        {
            s1 += max(a[i], 0LL);
        }
        else
        {
            s2 += max(a[i], 0LL);
        }
    }
    if (c == n)
    {
        cout << mx << '\n';
        return;
    }
    ll ans = max(s2, s1);
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