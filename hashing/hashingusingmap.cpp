#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n;i++){
        cin >> arr[i];
    }

    map<int , int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    // map will store everything in sorted order

    for(auto it:mpp){
        cout << it.first << " " <<it.second << endl; // map iteration, displays both key and value(frequency)
    }
    


    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        //fetch
        cout << mpp[number] << endl;
        
    }
    
    return 0;
}