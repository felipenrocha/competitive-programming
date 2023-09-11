#include <iostream>
#include <vector>
#include <cmath>



// this one i needed help, i couldnt figure it out by myself
// the diagonal insight is really good to start solving. (look for a patterin if row == column, row< column and row > column)

using namespace std;
typedef unsigned long long int ull;

ull find_number(ull x, ull y);

int main(int argc, const char **argv)
{
    ull t, y, x;
    cin >> t;
    ull solutions[t];
    for (ull i = 0; i < t; i++)
    {
        cin >> y;
        cin >> x;

        solutions[i] = find_number(y, x);
    }
    for (ull i = 0; i < t; i++)
    {
        cout << solutions[i] << '\n';
    }

    return 0;
}

ull find_number(ull y, ull x)
{
    ull number = 1;
    if (y == x)
    {
        number = x * x - (x - 1);
    }
    // row greater than column
    if (y > x)
    {
        if (y % 2 != 0)
        {
            // row is odd
            ull diagonal = y * y - (y - 1);
            // offset difference
            ull offset = y - x;
            // number = diagonal - offset
            number = diagonal - offset;
        }
        else
        {
            // row even
            ull diagonal = y * y - (y - 1);
            // offset difference
            ull offset = y - x;
            // number = diagonal - offset
            number = diagonal + offset;
        }
    }
    if (x > y)
    {
        if (x % 2 != 0)
        {
            // column is odd
            ull diagonal = x * x - (x - 1);
            // offset difference
            ull offset = x - y;
            // number = diagonal - offset
            number = diagonal + offset;
        }
        else
        {
            // column even
            ull diagonal = x * x - (x - 1);
            // offset difference
            ull offset = x - y;
            // number = diagonal - offset
            number = diagonal - offset;
        }
    }
    return number;
}