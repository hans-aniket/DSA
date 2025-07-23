#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
        int original = x;
        int revNum = 0;
        if (x < 0) {
            return false;
        } 
        else {
            while (x > 0) {
                int last_digit = x % 10;
                x = x / 10;
                revNum = (revNum * 10) + last_digit;
            }
        if (original == revNum) {
            cout << revNum;
            return true;
        } else {
            return false;
        }
            
        }
        
    }

int main(){
    int x;
    cin >> x;
    cout << isPalindrome(x) << endl;
}
