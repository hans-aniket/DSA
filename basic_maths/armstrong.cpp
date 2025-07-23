#include <bits/stdc++.h>
using namespace std;

bool armstrong(int x){;
    int original = x;
    int armstrong = 0;
    string s = to_string(x);
    int num_digits = s.length();
    while (x > 0)
    {
        int last_digit = x%10;
        x = x/10;
        armstrong = armstrong + pow(last_digit,num_digits);
    }
    if(original == armstrong){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    int x;
    cin >> x;
    cout << armstrong(x) << endl;
}