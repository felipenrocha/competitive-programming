#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define SOLD 1
#define NOT_SOLD 0
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a,b;

    //vector<pair<ll, int>> b;
    for (ll i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;
        a.push_back(ai);
    }
    for (ll i = 0; i < m; i++)
    {
        ll bi;
        cin >> bi;
        b.push_back(bi);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans = 0;
    for (long unsigned int i = 0; i < a.size(); i++)
    {

        // find lower bound for j using key a[i]+k and a[i-k]
        int position =  lower_bound(b.begin(), b.end(), a[i] - k) - b.begin();
        if (b[position] >= a[i] - k && b[position] <= a[i] + k)
        {
            b.erase(b.begin() + position);
            ans++;
        }
    }

    cout << ans << "\n";
}
int main()
{

    fast_cin();
    solve();
    return 0;
} 