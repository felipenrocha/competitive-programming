#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int n, ans = 0, total = 0, x;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> x;
            if (x == 1)
                total++;
        }
        if (total >= 2)
            ans++;
        total = 0;
    }
    cout << ans << '\n';

    return 0;
}
