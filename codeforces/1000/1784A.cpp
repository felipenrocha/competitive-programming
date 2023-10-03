#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int64_t n, a;

    cin >> n;
    vector<int64_t> health;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        health.push_back(a);
    }

    sort(health.begin(), health.end());

    int64_t total = 0;
    if (health[0] != 1)
    {
        total += health[0] - 1;
        health[0] = 1;
    }

    for (int64_t i = 1; i < health.size(); i++)
    {

        if ((health[i] - health[i - 1]) > 1)
        {

            total += (health[i] - health[i - 1] - 1);
            health[i] = health[i - 1] + 1;
        }
    }
    cout << total << "\n";
}
int main(int argc, char const *argv[])
{
    int64_t t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// 11
// 3 3 5 7 4 6 3 10 9 8 2

// 2 3 3 4 5 6 7 8 9 10