#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>
#include <stack>

using namespace std;
typedef unsigned long long int ull;
void hanoi(int n, int src, int dest, int tmp);

int main(int argc, char const *argv[])
{

    ull n;
    cin >> n;

    // number of steps: 2^n - 1
    ull steps = pow(2, n) - 1;
    cout << steps << endl;
    hanoi(n, 1, 3, 2);

    return 0;
}

//hanoi revusrive
void hanoi(int n, int src, int dest, int tmp)
{
    if (n > 0)
    {
        hanoi(n - 1, src, tmp, dest);
        cout << src << " " << dest << endl;
        hanoi(n - 1, tmp, dest, src);
    }
}