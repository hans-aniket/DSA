#include <bits/stdc++.h>

using namespace std;

int main(){
    set<int> st;
    int n;
    cout << "Enter the number of elements in each list: ";
    cin >> n;
    
    int total_elements = 2 * n;
    int temp;
    
    cout << "Enter " << total_elements << " elements in total: ";
    for (int i = 0; i < total_elements; i++) {
        cin >> temp;
        st.insert(temp);
    }
    
    cout << "Unique elements are: ";
    for (int element : st) {
        cout << element << " ";
    }
    cout << endl;
    
    return 0;
}