#include <bits/stdc++.h>
using namespace std;


// wtf is this i cant do it.


int run_case(int case_number);
string set_substring(string s, int l, int r, int letter);

int main(int argc, char const *argv[])
{

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int t;

    string a = "01010001";
    string b = "01110101";
    string sa, sb;
    sa = set_substring(a, 4, 6, b[4]);
    sb = set_substring(b, 4, 6, b[4]);
    cout << "New string sa: " << sa << "\n";
    cout << "New string sb: " << sb << "\n";

    // cin >> t;
    // while (t != 0)
    // {
    //     run_case(t);
    //     t--;
    // }

    return 0;
}

int run_case(int case_number)
{
    string a, b;
    cin >> a >> b;
    for (int l = 0; l < a.size() - 1; l++)
    {
        for (int r = l + 1; r < a.size(); r++)
        {
            string sa, sb;
            if (a[l] == a[r])
            {
                sa = set_substring(a, l, r, a[l]);
                sb = set_substring(b, l, r, a[l]);

                if (sa == sb)
                {
                    cout << "YES"
                         << "\n";
                    return 0;
                }
            }
            if (b[l] == b[r])
            {
                sa = set_substring(a, l, r, b[l]);
                sb = set_substring(b, l, r, b[l]);

                if (sa == sb)
                {
                    cout << "YES"
                         << "\n";
                    return 0;
                }
            }
        }
    }
    cout << "NO"
         << "\n";

    return 0;
}

string set_substring(string s, int l, int r, int letter)
{
    string new_string = s;
    for (int i = l; i <= r; i++)
    {
        new_string[i] = letter;
    }

    return new_string;
}