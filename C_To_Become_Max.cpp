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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll &x : a)
    {
        cin >> x;
    }
    ll overall = 0;
    for (ll i = 0; i < n; i++)
    {
        ll l = a[i], r = l + k + 1, ans = 0;
        while (l <= r)
        {
            ll m = (l + r) >> 1;
            bool ok = 0;
            ll sum = 0;
            for (ll j = i; j < n; j++)
            {
                if (a[j] < m - (j - i))
                {
                    sum += m - (j - i) - a[j];
                }
                else
                {
                    ok = 1;
                    break;
                }
            }
            if (ok and sum <= k)
            {
                ans = m;
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        overall = max(overall, ans);
    }
    cout << overall << '\n';
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