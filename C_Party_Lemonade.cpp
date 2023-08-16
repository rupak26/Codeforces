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
ll a[35], b[35], c[35], dp[35];
void solve()
{
    ll n, l;
    cin >> n >> l;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = (1 << i);
    }
    ll ans = 0, sum = (ll)1e22;
    for (ll i = 0; i < n - 1; i++)
    {
        a[i + 1] = min(a[i] * 2, a[i + 1]);
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        ll need = l / b[i];
        ans += need * a[i];
        l -= need << i;
        sum = min(sum, ans + (l > 0) * a[i]);
    }
    cout << sum;
}
int main()
{
    int t = 1;
    while (t--)
    {
        solve();
    }
}