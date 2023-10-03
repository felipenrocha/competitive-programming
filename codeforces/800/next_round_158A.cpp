#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int n, k, a, ans = 0;
    vector<int> scores;
    cin >> n;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        scores.push_back(a);
    }

    int key = scores[k - 1], i = 0;
    while (scores[i] != 0 && scores[i] >= key && i < n)
    {
        ans++;
        i++;
    }

    cout << ans << "\n";

    return 0;
}