#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low, int mid, int high){
    vector<int> temp;

    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[])
        }
    }

}

void mS(vector<int> &arr, int low, int high){
    if(low == high) return;
    int mid = (low + high)/2;
    mS(arr,low,mid);
    mS(arr,mid+1,high);
    merge_sort(arr,low,mid,high);

}

void merge_sort(vector<int> &arr,int n){
    mS(arr,0,n-1);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    merge_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

}

/*
    Divide and merge based

*/