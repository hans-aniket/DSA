#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr,int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i<j)
    {
        while (arr[i]<=pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j]>pivot && j >= low + 1)
        {
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
        swap(arr[low], arr[j]);
        return j;
        
    }
    
}
void qs(vector<int> &arr,int low, int high ){
    if(low <high){
        int pIndex = partition(arr,low,high);
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1,high);
    }
}
vector<int> quickSort(vector<int> arr){
    qs(arr,0,arr.size()-1);
    return arr;
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements separated by spaces: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Call the sorting function
    vector<int> sortedArr = quickSort(arr);

    // Print the result
    cout << "Sorted array: ";
    for (int val : sortedArr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

/*
DIVIDE AND CONQUER ALGO
pick a pivot(any element of array)
place it in its correct place in array
smaller on the left and larger on the right
repeat again and again until sorted
*/

/*
time complexity: Nlogn
*/