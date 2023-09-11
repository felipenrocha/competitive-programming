/*
CSES Problem Set
Weird Algorithm

Consider an algorithm that takes as input a positive integer n
. If n
 is even, the algorithm divides it by two, and if n
 is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n
 is one. For example, the sequence for n=3
 is as follows:
3→10→5→16→8→4→2→1

Your task is to simulate the execution of the algorithm for a given value of n
.

Input

The only input line contains an integer n
.

Output

Print a line that contains all values of n
 during the algorithm.

Constraints
1≤n≤10e6

1699000271 


802033518 

5097000814 
*/

#include <iostream>
using namespace std;

#define MAX_N 1e6

int main(int argc, char const *argv[])
{
    long long unsigned int n;

    // read n
    cin >> n;
    if (n <= MAX_N)
    {
        while (n > 1)
        {
            cout << n << " ";
            if (n % 2 == 0)
            {
                // even
                n = n / 2;
            }
            else
            {
                n = (3 * n) + 1;
            }
        }
        // print 1
        cout << n;
    }
    else{
        cout << "N size is too big!";
    }
    return 0;
}
