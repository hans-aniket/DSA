#include <bits/stdc++.h>
using namespace std;

int largestnum(int arr[], int n){
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max) max = arr[i];
        
    }
    return max;
    
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << largestnum(arr,n) << endl;
    
}