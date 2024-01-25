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

void solve()
{
    string c;
    cin >> c;
    stack<int> formigueiro;
    int total_formigas = 0;
    int current_formigas = 0;

    formigueiro.push(c[0]);
    for (int i = 1; i < c.size(); i++)
    {
        char entrada = formigueiro.top();

        if (c[i] == '.')
        {
            // formiga aparece
            if (entrada == '.')
            {
                // se na entrada tiver outra formiga -> troca formigas:
            }
            if (entrada == 'r')
            {
                current_formigas++; // se rã tiver na entrada -> é comida
            }
            if (entrada == 's')
            {
                // se tiver serpente na entrada, nada acontece -> formiga entrada
                formigueiro.push('.');
            }
        }
        if (c[i] == 'r')
        {
            // rã aparece:
            if (entrada == '.')
            {
                // se tiver formiga -> continue sem comer
                formigueiro.push('r'); // ra no topo
            }
            if (entrada == 'r')
            {
                // outra rã -> troca a rã e adiciona ao total de fromigas pois ela sobrevive
                total_formigas += current_formigas;
                current_formigas = 0; // troca rã
            }
            if (entrada == 's')
            {
                // serpente passou sem ver rã
                formigueiro.push('r');
            }
        }
        if (c[i] == 's')
        {
            // serpente aparece:
            if (entrada == 'r')
            {
                // se rã na entrada devora, e reseta current formigas
                current_formigas = 0;
            }

            // caso contrario so push 's'
            formigueiro.push('s');
        }
    }
    char entrada = formigueiro.top();
    if (entrada == 'r')
    {
        total_formigas += current_formigas;
    }
    cout << total_formigas << "\n";
}
int main()
{
    fast_cin();
    solve();
    return 0;
}