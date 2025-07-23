#include <bits/stdc++.h>
using namespace std;

void nto1(int n){
    if(n == 0)
    {return;}
    else{
        cout << n << endl;
        n--;
        nto1(n);
    }
}

int main(){
    int n;
    cin >> n;
    nto1(n);
}