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
    string s, p, q;
    cin >> s >> p;
    q = p;
    reverse(all(q));

    ll c1 = 0, c2 = 0;
    for (ll i = 0; i < n; i++)
    {
        c1 += (s[i] != p[i]);
        c2 += (s[i] != q[i]);
    }
    if (c1 == 0)
    {
        cout << 0 << '\n';
        return;
    }
    if (c2 == 0)
    {
        cout << 2 << '\n';
        return;
    }
    cout << min(2 * c1 - (c1 % 2), 2 * c2 - (1 - c2 % 2)) << '\n';
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