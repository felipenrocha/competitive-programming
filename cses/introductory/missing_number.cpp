

#include <iostream>
#include <string.h>
#include <vector>

#define MAX_N 200000
using namespace std;

#define MISSING 0
#define NOT_MISSING 1

int main(int argc, const char **argv)
{

    unsigned int n;

    // read n

    cin >> n;

    // initalize array with missing value
    int *numbers = (int *)malloc(n * sizeof(int));
    memset(numbers, MISSING, n * sizeof(int));

    // Read numbers from the user input until there's no more input
    unsigned int value;
    for (int i = 0; i < n - 1; i++)
    {
        // O(n) complexity
        cin >> value;

        // go to array value and set it to not missing
        numbers[value - 1] = NOT_MISSING;
    }


    for (int i = 0; i < n + 1; i++)
    {
        // O(n) complexity
        if (numbers[i] == MISSING)
        {
            cout << i + 1;
            return 0;
        }
    }

    return 0;
}