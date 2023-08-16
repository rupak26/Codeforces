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
    vector<ll> a(n), cnt(260, 0);
    for (ll &x : a)
    {
        cin >> x;
    }
    cnt[0] = 1;
    ll d = 0, ans = 0;
    for (ll i = 0; i < n; i++)
    {
        d ^= a[i];
        for (ll j = 0; j < 260; j++)
        {
            if (cnt[j] > 0)
            {
                ans = max(ans, (d ^ j));
            }
        }
        cnt[d] = 1;
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