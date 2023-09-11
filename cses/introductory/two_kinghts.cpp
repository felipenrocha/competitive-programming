#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef unsigned long long int ull;

int main(int argc, char const *argv[])
{
    // for an nxn grid the total combinations of 2 pieces is equal to ((n^2)(n^2-1))/2
    ull t;
    cin >> t;
    for (ull n = 1; n <= t; ++n)
    {
        // combination nxn for two equal pieces
        ull combinations = ((n * n) * ((n * n) - 1)) / 2;

        // combinations for two knights to attack each other:
        // the knight can attack from its (i,j) position to the positions (i+-1,j+-2) and (i+-2,j+-1)
        // check for each position, which attacks are available

        // i was using if elses to check if the position exists but this is a quicker equation

        // combinations for knight attacks:
        //  number of ways in a +1+2 = (n-1)(n-2)
        //  number of ways in a +2+1 = (n-1)(n-2)
        //

        ull total_attacks = 4 * (n - 1) * (n - 2);

        combinations -= total_attacks;

        cout << combinations << '\n';
    }

    return 0;
}
