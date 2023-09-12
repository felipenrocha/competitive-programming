#include <iostream>
#include <vector>
#include <string>
#include <cstring>

#include <cmath>
using namespace std;
typedef unsigned long long int ull;

// count all letters of word, check if all are even, and generate palindrome (first case of n even)

int main(int argc, char const *argv[])
{
    string in;
    cin >> in; // STRINGS a-z

    // generate array to count how many of each letter there is (initialized at 0 in c++)
    ull letters_count[26] = {};
    ull size = in.length();
    char solution[size]; // solution string
    for (ull i = 0; i < size; i++)
    {
        ull index = in[i] - 'A';
        letters_count[index]++;
    }

    // print array
    if (size % 2 == 0)
    {
        ull start = 0;
        ull end = size - 1;
        for (ull i = 0; i <= 25; i++)
        {
            // checking if its possible
            if (letters_count[i] % 2 != 0)
            {
                cout << "NO SOLUTION";
                return 0;
            }
            while (letters_count[i] > 1)
            {
                // for each letter repeated ADD it to solution
                solution[start] = 'A' + i;
                solution[end] = 'A' + i;
                start++;
                end--;
                letters_count[i] -= 2; // decrease letters count
            }
        }
    }
    else
    {
        // size % 2 == 1
        ull mid = (size - 1) / 2;
        ull start = 0;
        ull end = size - 1;
        ull odd_letters = 0;
        ull odd_index = 0;
        for (ull i = 0; i < 25; i++)
        {
            if (letters_count[i] % 2 == 1)
            {
                odd_index = i;

                letters_count[i]--;
                odd_letters++;
            }
        }
        if (odd_letters != 1)
        {
            cout << "NO SOLUTION\n";
            return 0;
        }
        solution[mid] = 'A' + odd_index;
        for (ull i = 0; i <= 25; i++)
        {

            while (letters_count[i] > 1)
            {
                // for each letter repeated ADD it to solution
                solution[start] = 'A' + i;
                solution[end] = 'A' + i;
                start++;
                end--;
                letters_count[i] -= 2; // decrease letters count
            }
        }
    }
    for (ull i = 0; i < size; i++)
    {
        cout << solution[i];
    }

    return 0;
}
