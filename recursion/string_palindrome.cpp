#include <bits/stdc++.h>
using namespace std;

bool string_palindrome(int i, string& s){
    if(i >= s.length()/2) return true;
    if(s[i] != s[s.length()-i-1]) return false;
    return string_palindrome(i+1,s);
}

int main(){
    string s = "madam";
    cout << string_palindrome(0,s);
    cout << endl;
}