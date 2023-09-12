#include <iostream>
// #include <vector>
#include <cmath>
using namespace std;
typedef unsigned long long int ull;
ull modpow(ull b, ull e, ull m);

int main(int argc, char const *argv[])
{
    ull M = 1000000007;
    ull n;
    ull b = 2;
    cin >> n;

    cout << modpow(b, n, M);

    // cout << pow(2, n);

    return 0;
}

// using modular exponentiation
// from wikipedia
ull modpow(ull b, ull e, ull m)
{

    if (m == 1)
    {
        return 0;
    }
    else
    {
        int r = 1;
        b = b % m;
        while (e > 0)
        {
            if (e % 2 == 1)
            {
                r = (r * b) % m;
            }
            b = (b * b) % m;
            e = e >> 1;
        }
        return r;
    }
}
