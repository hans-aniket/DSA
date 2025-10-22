#include <bits/stdc++.h>
using namespace std;

int main(){
    int low = 1, high = m;
    while(low<=high){
        int mid = (low+high)/2;
        int midN = func(mid,n);
        if(midN == m){
            return mid;
        }
        else if(midN < m) low = mid+1;
        else high = mid-1;
    }
    return -1;

}