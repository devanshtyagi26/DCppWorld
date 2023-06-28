#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int divident;
    int divisor;
    int remainder;
    if(a>b){
        divident = a;
        divisor = b;
    }
    else{
        divident = b;
        divisor = a;
    }
    remainder = divident%divisor;

    if(remainder == 0){
        return divisor;
    }
    else{
        return gcd(remainder, divisor);
    }
}

int main(){
    cout << "Find GCD of two numbers using recursion.\n\n";
    int a,b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "\nEnter second number: ";
    cin >> b;
    int ans = gcd(a,b);
    cout << "\nThe GCD of " << a << " and " << b << " is " << ans;
    return 0;
}