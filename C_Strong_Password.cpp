#include <bits/stdc++.h>
using namespace std;
// Author : Rupok Biswas
// Good is Not Good enough

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
ll dp[300300][15];
ll n, m;
string db, l, r;
void sol()
{
    cin >> db;
    ll n = sz(db);
    vector<ll> v[10];
    for (ll i = 0; i < n; i++)
    {
        ll x = (db[i] - '0');
        v[x].pb(i + 1);
    }
    for (ll i = 0; i < 10; i++)
    {
        v[i].pb(n);
    }
    cin >> m;
    string l, r;
    cin >> l >> r;
    bool flag = false;
    for (ll i = 0; i < m; i++)
    {
        ll left = l[i] - '0', right = r[i] - '0';
        ll ind = 0, d = 0;
        for (ll j = left; j <= right; j++)
        {
            ll d = upper_bound(all(v[j]), ind) - v[j].begin();
            if (d == n)
            {
                flag = true;
                break;
            }
            ind = d;
        }
    }
    cout << (flag == 1 ? "YES" : "NO") << '\n';
}
int main()
{
#ifndef ONLINE_JUDGE
    // freopen("Error.txt", "w", stderr);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
}
