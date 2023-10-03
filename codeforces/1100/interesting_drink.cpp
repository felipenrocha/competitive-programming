#include <bits/stdc++.h>


using namespace std;


int main(int argc, char const *argv[])
{

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);



    int n,x,q,m, ans;
    cin >> n;
    vector<int> prices;


    for (int i = 0; i < n; i++)
    {
        cin >> x;
        prices.push_back(x);
    }

    // sort prices o(n):
    sort(prices.begin(), prices.end());

    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> m;
        // o(log n)
        ans = upper_bound(prices.begin(), prices.end(), m) - prices.begin(); // getting index trick
        cout << ans << '\n';
    }
    

    

    return 0;
}


