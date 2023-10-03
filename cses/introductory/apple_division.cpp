#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;
typedef unsigned long long int ull;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> weights, A, B;

    int total_sum = 0, total_a = 0, total_b = 0;

    for (int i = 0; i < n; i++)
    {
        ull weight;
        cin >> weight;
        weights.push_back(weight);
        total_sum += weights[i];
    }
    sort(weights.begin(), weights.end(), greater<>());
    for (int i = 0; i < n; i++)
    {

        if (total_a <= total_b)
        {

            total_a += weights[i];
            A.push_back(weights[i]);
        }
        else
        {

            total_b += weights[i];
            B.push_back(weights[i]);
        }
    }
    cout << abs((total_a - total_b));

    return 0;
}
