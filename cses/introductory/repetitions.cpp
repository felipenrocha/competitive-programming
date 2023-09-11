
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{

    string input;
    // read input
    cin >> input;
    // int to store the max repetitions so far
    long long unsigned int max_repetitions = 1;
    long long unsigned int current_repetitions = 1;

    int N = input.length();
    for (int i = 1; i < N; i++)
    {
        // starting from i = 1 comparing to i - 1 for each iteration
        if (input[i - 1] == input[i])
        {
            current_repetitions++;
        }
        else
        {
            current_repetitions = 1;
        }
        if (current_repetitions >= max_repetitions)
        {
            max_repetitions = current_repetitions;
        }
    }
    cout << max_repetitions;

    return 0;
}
