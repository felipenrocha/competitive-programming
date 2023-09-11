
#include <iostream>
#include <vector>

using namespace std;
typedef unsigned long long ull;

int main(int argc, char const *argv[])
{

    ull n;
    cin >> n;
    // If N is less than or equal to 3, then no such permutation is possible.
    if (n == 3 || n == 2)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    int solution[n];
    // If N is even, print all even numbers from 2 to N firstly, and then all odds from 1 to N – 1 print all odd numbers.
    if (n % 2 == 0)
    {
        int j = 0;
        for (int i = 2; i <= n; i += 2)
        {
            solution[j] = i;
            j++;
        }
        for (int i = 1; i < n; i += 2)
        {
            solution[j] = i;
            j++;
        }
    }
    // If the N is odd, then print all even numbers from 2 to N – 1 and then all odd numbers from 1 to N.
    else
    {
        int j = 0;
        for (int i = 2; i <= n - 1; i += 2)
        {
            solution[j] = i;
            j++;
        }
        for (int i = 1; i <= n; i += 2)
        {
            solution[j] = i;
            j++;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        cout << solution[i] << ' ';
    }
    cout << solution[n - 1];

    return 0;
}
