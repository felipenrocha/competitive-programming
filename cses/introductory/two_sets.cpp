#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef unsigned long long int ull;

int main(int argc, char const *argv[])
{

    ull n;
    cin >> n;
    ull total_sum = ((n * (n + 1)) / 2);
    vector<ull> A;
    vector<ull> B;

    // if  n == 3:
    if (total_sum % 2 == 0)
    {
        // n>3
        // sum of numbers must be pair to be splitted in two
        cout << "YES\n";

        ull mid = total_sum / 2;
        for (ull i = n; i > 0; i--)
        {
            // using mid to balance each vector
            if (i <= mid)
            {
                A.push_back(i);
                mid -= i;
            }
            else
            {
                B.push_back(i);
            }
        }
        cout << A.size() << '\n';
        for (size_t i = 0; i < A.size() - 1; i++)
        {
            cout << A[i] << ' ';
        }
        cout << A[A.size() - 1] << '\n';

        cout << B.size() << '\n';
        for (size_t i = 0; i < B.size() - 1; i++)
        {
            cout << B[i] << ' ';
        }
        cout << B[B.size() - 1] << '\n';
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
