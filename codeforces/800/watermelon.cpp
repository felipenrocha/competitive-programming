#include <bits/stdc++.h>


using namespace std;


int main(int argc, char const *argv[])
{

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int w;
    cin >> w;
    if(w > 2 && (w % 4 == 0 || (w-2) % 4 == 0)){
        cout << "YES";
    }
    else{
         cout << "NO";
    }
        

    return 0;
}