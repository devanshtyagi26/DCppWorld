#include <bits/stdc++.h>
using namespace std;

int gcdRecursive(int a, int b){
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

    while (remainder != 0){
        divident = divisor;
        divisor = remainder;
        remainder = divident%divisor;
    }
    return divisor;
}

int main(){
    cout << "Find GCD of two numbers without using recursion.\n\n";
    int a,b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "\nEnter second number: ";
    cin >> b;
    int ans = gcdRecursive(a,b);
    cout << "\nThe GCD of " << a << " and " << b << " is " << ans;
    return 0;
}