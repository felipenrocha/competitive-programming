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
    int letters_count[25] = {};
    int size = in.length();
    char solution[size]; // solution string
    for (int i = 0; i < size; i++)
    {
        int index = in[i] - 'A';
        letters_count[index]++;
    }
    if (size % 2 == 0)
    {
        int start = 0;
        int end = size - 1;
        for (int i = 0; i < 25; i++)
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
                letters_count[i]--; // decrease letters count
            }
        }
    }
    else
    {
        // size % 2 == 1
        int mid = (size - 1) / 2;
        int start = 0;
        int end = size - 1;
        int odd_letters = 0;
        int odd_index = 0;
        for (int i = 0; i < 25; i++)
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
        for (int i = 0; i < 25; i++)
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
    for (int i = 0; i < size; i++)
    {
        cout << solution[i];
    }

    return 0;
}
