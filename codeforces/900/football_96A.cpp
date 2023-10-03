#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int total=1, last_player = '2', current_player;
    string input;

    cin >> input;

    for (int i = 0; i < input.size(); i++)
    {
        current_player = input[i];
        if (current_player == last_player)
        {
            total++;
        }
        else
        {
            total = 1;
        }

        if (total == 7)
        {
            cout << "YES"
                 << "\n";
            return 0;
        }
        last_player = current_player;
    }
    cout << "NO" << '\n';

    return 0;
}