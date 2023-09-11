
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    unsigned long long int n, curr_value, last_value, steps;

    // read n

    cin >> n;
    last_value = 0;
    steps = 0;
    // initalize array

    for (int i = 0; i < n; i++)
    {
        cin >> curr_value;

        if (curr_value < last_value)
        {
            steps += last_value - curr_value;
        }
        else
        {
            last_value = curr_value;
        }
    }

    // number of steps
    cout << steps;
    return 0;
}
