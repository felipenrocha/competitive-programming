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
struct StackMax
{
    stack<int> saco;
    int max;
    void getMax()
    {
        if (saco.empty())
        {

            cout << "0"
                 << "\n";
        }
        else
        {
            cout << max << "\n";
        }
    }
    void pop()
    {
        if (saco.empty())
        {
            return;
        }
        int t = saco.top();
        saco.pop();
        // Maximum will change as the maximum element
        // of the stack is being removed.
        if (t > max)
        {
            max = 2 * max - t;
        }
    }
    void push(int x)
    {
        // Insert new number into the stack
        if (saco.empty())
        {
            max = x;
            saco.push(x);
            return;
        }

        // If new number is greater than maxEle
        if (x > max)
        {
            saco.push(2 * x - max);
            max = x;
        }

        else
            saco.push(x);
    }
};

void solve()
{
    int n, x;
    char c;
    StackMax saco;

    cin >> n;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> c >> x;
        if (c == 'A')
        {
            mx = max(x, mx);
            saco.push(x);
        }
        if (c == 'V')
        {
            int mx = 0;

            saco.getMax();
        }
        if (c == 'R')
        {
            saco.pop();
        }
    }
}
int main()
{
    fast_cin();
    solve();
    return 0;
}#pragma GCC optimize("Ofast")
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
struct StackMax
{
    stack<int> saco;
    int max;
    void getMax()
    {
        if (saco.empty())
        {

            cout << "0"
                 << "\n";
        }
        else
        {
            cout << max << "\n";
        }
    }
    void pop()
    {
        if (saco.empty())
        {
            return;
        }
        int t = saco.top();
        saco.pop();
        // Maximum will change as the maximum element
        // of the stack is being removed.
        if (t > max)
        {
            max = 2 * max - t;
        }
    }
    void push(int x)
    {
        // Insert new number into the stack
        if (saco.empty())
        {
            max = x;
            saco.push(x);
            return;
        }

        // If new number is greater than maxEle
        if (x > max)
        {
            saco.push(2 * x - max);
            max = x;
        }

        else
            saco.push(x);
    }
};

void solve()
{
    int n, x;
    char c;
    StackMax saco;

    cin >> n;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> c >> x;
        if (c == 'A')
        {
            mx = max(x, mx);
            saco.push(x);
        }
        if (c == 'V')
        {
            int mx = 0;

            saco.getMax();
        }
        if (c == 'R')
        {
            saco.pop();
        }
    }
}
int main()
{
    fast_cin();
    solve();
    return 0;
}