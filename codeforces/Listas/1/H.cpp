#include <bits/stdc++.h>
#include <string>
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, pos_x, pos_y;
    cin >> n >> pos_x >> pos_y;
    ll min_price = INF;
    int index;
    for (int i = 0; i < n; i++)
    {
        ll x, y, p;

        cin >> x >> y >> p;
        ll tmp = min_price;
        min_price = min(min_price, 2 * (abs(pos_x - x) + abs(pos_y - y)) + p);
        if (min_price != tmp)
        {
            index = i;
        }
    }
    cout << min_price << " " << index + 1;
    return 0;
}