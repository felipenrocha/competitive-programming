
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
