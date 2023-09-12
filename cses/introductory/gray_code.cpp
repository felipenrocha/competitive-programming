#include <iostream>
#include <vector>
#include <string>
#include <cstring>

#include <cmath>
#define MAX_N 16

using namespace std;
typedef unsigned long long int ull;
string addZero(string number);
string addOne(string number);
vector<string> generateGray(int n);

// getting code from wikipedia:

// The binary-reflected Gray code list for n bits can be generated recursively from the list for n − 1 bits by
//  reflecting the list (i.e. listing the entries in reverse order), prefixing the entries in the original list with a binary 0,
//  prefixing the entries in the reflected list with a binary 1, and then concatenating the original list with the reversed list

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<string> bitsList;
    bitsList = generateGray(n);
    for (int i = 0; i < bitsList.size(); i++)
    {
        cout << bitsList[i] << "\n";
    }

    return 0;
}

string addZero(string number)
{
    string r = number;
    r.insert(0, 1, '0');
    return r;
}
string addOne(string number)
{
    string r = number;
    r.insert(0, 1, '1');
    return r;
}

vector<string> generateGray(int n)
{
    // generate an array of strings in gray code with n bits
    vector<string> list;
    if (n == 1)
    {
        list.push_back("0");
        list.push_back("1");
        return list;
    }

    // n-1 bits list
    vector<string> smallerBitsList = generateGray(n - 1);

    // reflected
    vector<string> reflected(smallerBitsList.rbegin(), smallerBitsList.rend());

    // add 0's to smalller:
    for (int i = 0; i < smallerBitsList.size(); i++)
    {
        // prefix old entries with 0:
        smallerBitsList[i] = addZero(smallerBitsList[i]);
        // prefix new entries with 1:
        reflected[i] = addOne(reflected[i]);
    }
    // concat:
    smallerBitsList.insert(smallerBitsList.end(), reflected.begin(), reflected.end());
    return smallerBitsList;
}