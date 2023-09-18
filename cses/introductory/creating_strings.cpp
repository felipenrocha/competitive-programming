#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

typedef unsigned long long int ull;
ull fat(ull n);
void generateString(string &s, vector<string> &solutions);
// vector<string> generateStrings(string &s);
// void generateString(ull i, string &s, vector<string> &solutions);

void swap(char &a, char &b)
{

    char tmp = a;
    a = b;
    b = tmp;
}
int main(int argc, char const *argv[])
{
    string n;
    cin >> n;
    // Ordenar a string de entrada em ordem lexicográfica
    sort(n.begin(), n.end());
    // contagem de letras da string

    //
    vector<string> solutions;
    generateString(n, solutions);

    cout << solutions.size() << endl;
    for (ull i = 0; i < solutions.size(); i++)
    {
        cout << solutions[i] << endl;
    }

    // lexic order:
    // sort(solutions.begin(), solutions.end());s

    return 0;
}

// vector<string> generateStrings(string &s)
// {
//     vector<string> solutions;
//     generateString(0, s, solutions);
//     return solutions;
// }

// void generateString(ull i, string &s, vector<string> &solutions)
// {

//     if (i == s.length() - 1)
//     {
//         solutions.push_back(s);
//     }
//     for (ull j = i; j < s.length(); j++)
//     {
//         if (j > i && s[i] == s[j])
//             continue;
//         // if (j > i && s[i - 1] == s[j])
//         //     continue;

//         swap(s[i], s[j]);
//         generateString(i + 1, s, solutions);
//         swap(s[i], s[j]);
//     }
// }

void generateString(string &s, vector<string> &solutions)
{
    do
    {
        solutions.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
}