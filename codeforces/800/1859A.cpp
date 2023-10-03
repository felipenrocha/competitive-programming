#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a;
    vector<int> b;
    vector<int> c;

    while (n--)
    {
        int ai;
        cin >> ai;
        a.push_back(ai);
    }
    // sort a
    sort(a.begin(), a.end());
    if (a[0] == a[a.size() - 1])
    {
        cout << "-1"
             << "\n";
        return;
    }

    // diff numbers
    // cj cant divide any of bi, so we push all smaller elements to b so that all elements in c are bigger then the ones in b and are nod dividible by bi
    int it = a.size() - 1;
    c.push_back(a[it]); // push biggest element
    it--;
    while (a[it] == c[0])
    {
        // push all cases where the biggest number is repeated (a is divisible by a)
        c.push_back(a[it]);
        it--;
    }
    while (it >= 0)
    {
        // push all number smaller than the biggest to b
        b.push_back(a[it]);
        it--;
    }
    cout << b.size() << " " << c.size() << "\n";

    for (auto element : b)
    {
        cout << element << " ";
    }
    cout << "\n";
    for (auto element : c)
    {
        cout << element << " ";
    }
    cout << "\n";
}

int main(int argc, char const *argv[])
{

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}