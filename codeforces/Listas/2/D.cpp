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
typedef tuple<int, int, int> tiii;

class cmpcaixas // comapre caixas priority queue
{
public:
    // a eh o proximo, b eh o atual
    bool operator()(tiii &a, tiii &b)
    {
        int x, y, z, r, s, t;
        tie(x, y, z) = a;
        tie(r, s, t) = b;
        // se acaberem na mesma hora
        if (x == r)
            return y > s; // retorna menor id
        else
            return x > r; // retorna menor time_to_finish
    }
};

void solve()
{
    int n, m, c, v, id, time_to_finish = 0;
    cin >> n >> m;
    queue<int> clientes;
    priority_queue<tiii, vector<tiii>, cmpcaixas> caixas;
    int total_time = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        caixas.push({time_to_finish, i + 1, v}); // time_to_finish, id, velocidade
    }
    for (int i = 0; i < m; i++)
    {
        cin >> c;
        clientes.emplace(c);
    }
    while (!clientes.empty())
    {
        c = clientes.front();
        clientes.pop();
        // achar proximo caixa para cliente:
        tie(time_to_finish, id, v) = caixas.top();
        caixas.pop();
        time_to_finish += (v * c);
        caixas.push({time_to_finish, id, v});
    }
    while (!caixas.empty())
    {
        tie(time_to_finish, id, v) = caixas.top();
        caixas.pop();
    }

    cout << time_to_finish << "\n";
}
int main()
{
    fast_cin();
    solve();
    return 0;
}