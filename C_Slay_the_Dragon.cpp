#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    vector<ll> a(n);
    for (ll &x : a)
    {
        cin >> x;
    }
    sort(all(a));
    ll sum = accumulate(all(a), 0ll);
    cin >> q;
    while (q--)
    {
        ll def, ata;
        cin >> def >> ata;
        int p = lower_bound(all(a), def) - a.begin();
        ll ans = 3e18;
        if (p < n)
        {
            ans = min(ans, max(0ll, ata - (sum - a[p])));
        }
        p--;
        if (p >= 0)
        {
            ans = min(ans, def - a[p] + max(0ll, ata - (sum - a[p])));
        }
        cout << ans << '\n';
    }
}
