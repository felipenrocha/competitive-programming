#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int n, sum = 0, value;
    cin >> n;
    vector<int> coins;
    while (n--)
    {
        int a;
        cin >> a;
        sum += a;
        coins.push_back(a);
    }
    value = (sum >> 1) + 1; // value = sum / 2 + 1
    sort(coins.begin(), coins.end(), greater<int>());
    int my_coins = 0, total = 0;
    while (total < value)
    {
        total += coins[my_coins++];
    }

    cout << my_coins;
    return 0;
}