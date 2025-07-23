#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    // pre-compute
    int hash[256] ={0}; // 256 will include all characters
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++; // will add +1 to any character in hash array for its ASCII code when it is found is in string s
    }
    
    int q;
    cin >> q;
    while (q--)
    {   
        char c;
        cin >> c;

        //fetch
        cout << hash[c] << endl;
    }
    return 0;
    
}