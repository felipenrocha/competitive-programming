#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;
typedef unsigned long long int ull;

int main(int argc, char const *argv[])
{
    ull t, a, b;
    vector<string> outputs;
    cin >> t;
    for (ull i = 0; i < t; i++)
    {
        cin >> a >> b;
        // reorder so a is always bigger or equal

        if (a < b)
        {
            ull tmp = a;
            a = b;
            b = tmp;
        }
        if (ceil(a / 2) > b)
        {
            outputs.push_back("NO\n");
            continue;
        }
        if ((a + b) % 3 == 0)
        {
            outputs.push_back("YES\n");
            continue;
        }
        else
        {
            outputs.push_back("NO\n");
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout << outputs[i];
    }

    return 0;
}
