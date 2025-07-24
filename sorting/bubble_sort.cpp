#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i = n-1; i>=0; i-- ){
        for(int j = 0;j<=i-1;j++)
        {
            if(arr[j]> arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    
}

/*
check first two adjacents then move on second and third and check if sorted if not then swap
last element will be maximum after 1st round of check is done of array. 
repeat till sorted
*/
/*
O(n^2) worst and avg
O(n) best when array is already sorteddd
*/