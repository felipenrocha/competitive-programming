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
    int n, m;
    cin >> n >> m;
    stack<int> esteira;
    priority_queue<int, vector<int>, greater<int>> paes;

    int a, time = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        time++; // 1 min fazendo pao

        while (!esteira.empty() && time >= esteira.top()) // se o pao do topo tiver atingido o estado fermentado (é retirado)
        {

            ans++; // retira tempo certo
            esteira.pop();
        }

        if (esteira.empty() || a + time <= esteira.top())
        {
            esteira.push(a + time); // tempo para ficar pronto = tempo passado + tempo q vai ficar pronto
        }
        else
        {
            int j = 0;
            paes.push(a + time);
            while (j < m && !esteira.empty())
            {
                // retiram m paes ou ate que a esteira esteja vazia
                int top = esteira.top();
                esteira.pop();
                j++;
                // se ja tiver sido fermentado ou passado do tempodescarta,
                // se nao, coloca na fila de prioridade em ordem decrescente
                if (top > time)
                    paes.push(top);
            }
            while (!paes.empty())
            {
                // paes ordenados em forma decrescente sendo colocados (o topo da pilha ao final sera o menor elemento)
                a = paes.top();
                paes.pop();
                esteira.push(a);
            }
        }
    }

    time++;
    while (!esteira.empty())
    {
        if (esteira.top() <= time)
        {
            ans++;
        }
        time += esteira.top();

        esteira.pop();
    }
    cout << ans << "\n";
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

void solve()
{
    int n, m;
    cin >> n >> m;
    stack<int> esteira;
    priority_queue<int, vector<int>, greater<int>> paes;

    int a, time = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        time++; // 1 min fazendo pao

        while (!esteira.empty() && time >= esteira.top()) // se o pao do topo tiver atingido o estado fermentado (é retirado)
        {

            ans++; // retira tempo certo
            esteira.pop();
        }

        if (esteira.empty() || a + time <= esteira.top())
        {
            esteira.push(a + time); // tempo para ficar pronto = tempo passado + tempo q vai ficar pronto
        }
        else
        {
            int j = 0;
            paes.push(a + time);
            while (j < m && !esteira.empty())
            {
                // retiram m paes ou ate que a esteira esteja vazia
                int top = esteira.top();
                esteira.pop();
                j++;
                // se ja tiver sido fermentado ou passado do tempodescarta,
                // se nao, coloca na fila de prioridade em ordem decrescente
                if (top > time)
                    paes.push(top);
            }
            while (!paes.empty())
            {
                // paes ordenados em forma decrescente sendo colocados (o topo da pilha ao final sera o menor elemento)
                a = paes.top();
                paes.pop();
                esteira.push(a);
            }
        }
    }

    time++;
    while (!esteira.empty())
    {
        if (esteira.top() <= time)
        {
            ans++;
        }
        time += esteira.top();

        esteira.pop();
    }
    cout << ans << "\n";
}
int main()
{
    fast_cin();
    solve();
    return 0;
}