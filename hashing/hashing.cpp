#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //precompute
    int hash[13] ={0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;

        // fetching hash array
        cout << hash[number] << endl;  
       
    }
    return 0;
    
    
    

}
/*
input for no of integers in array
input for integers in array
precompute hash array
input for no. of queries
input for numbers that are queries
fetch program
*/