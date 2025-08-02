#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for (int i = 0; i <= n-2; i++)
    {
        int mini = i;
        for (int j = i; j <= n-1; j++)
        {
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selection_sort(arr, n);
    for(int i = 0; i < n; i++){
        cout << " " << arr[i];
    }
    
}


/*
    get the minimum from the array and swap it with first element in array
    exculde 1st position and repeate the process for rest of the array untill the array is sorted
*/

/*
time complexity = O(n^2)
*/