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
ll fun(vector<ll> &a, ll n)
{
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i; j < n; j++)
        {
            set<ll> s(a.begin() + i, a.begin() + j);
            sum += sz(s);
        }
    }
    return sum;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (ll &x : a)
    {
        cin >> x;
    }

    for (ll i = 0; i < m; i++)
    {
        ll id, val;
        cin >> id >> val;
        id--;
        a[id] = val;
        cout << fun(a, n) << '\n';
    }
}
int main()
{
    int t = 1;
    while (t--)
    {
        solve();
    }
}