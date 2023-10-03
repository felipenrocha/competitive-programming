#include <bits/stdc++.h>

// 1 3 5 7     2 4 6

// 1 2 3 4     5 6 7

// mid =

using namespace std;

int main(int argc, char const *argv[])
{

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    // 10
    int64_t n, k, total_elements = 1;
    cin >> n >> k;
    int64_t mid = n / 2; // get separation from odd to even

    if (n % 2 == 0)
    {
        mid = n >> 1;
    }
    else
    {
        mid = (n >> 1) + 1;
    }
    if (k <= mid)
    {
        cout << 2 * (k - 1) + 1 << "\n";
    }
    else
    {
        k = k - mid;

        cout << 2 * (k) << "\n";
    }


    return 0;
}