#include <iostream>
// #include <vector>
#include <cmath>
using namespace std;
typedef unsigned long long int ull;
ull fat(ull n);
int main(int argc, char const *argv[])
{
    ull n;
    cin >> n;

    // curr power
    ull total_zeros = 0;
    ull curr_power = 1;
    ull curr_division = floor(n / pow(5, curr_power));

    while (curr_division >= 1)
    {
        // keep finding multiples of 5 
        // keep dividing by 5^2, 5^3,... to find the "10's" until theres 0
        total_zeros += curr_division;
        curr_power++;
        curr_division = floor(n / pow(5, curr_power));
    }
    cout << total_zeros;

    return 0;
}
