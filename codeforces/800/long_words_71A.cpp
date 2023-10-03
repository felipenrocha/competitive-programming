#include <bits/stdc++.h>


using namespace std;



int main(int argc, char const *argv[])
{

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i =0;i<n;i++){
        string w;
        cin >> w;
        int size = w.size();
        if(size > 10){
            string number_string = to_string(size - 2);
            cout << w[0] + number_string + w[size - 1] << '\n';
        }else{
            cout << w << '\n';
        }
    }



    return 0;

}