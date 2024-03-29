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
    int n, f, p;
    cin >> n >> f >> p;
    ll ans = 0;
    queue<int> veiculos;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        veiculos.emplace(ai);
    }
    int i = 0;
    while (!veiculos.empty())
    {
        if (i == 0 || i % f == 0)
        {
            //  veiculo inspecionado:
            int peso = veiculos.front();
            veiculos.pop(); // retira carro da fila
            if (peso <= p)
            {
                // peso livre -> + 5 segundos
                ans += 5;
            }
            else
            {
                // peso acima -> retira dois e vai para o final da fila
                veiculos.emplace(peso - 2);
                ans += 10; // +10s
            }
        }
        else
        {
            // veiculo nao inspecionado
            veiculos.pop(); // retira carro da fila
            ans++;          // ti = 1
        }

        i++;
    }
    cout << ans << "\n";
}
int main()
{
    fast_cin();
    solve();
    return 0;
}