#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    float sum=0;
    for(int i=1; i<=n; i++){
        sum += (pow(-1,i-1))*(1/pow(i,i));
    }
    cout<<"Ans: "<<sum;
    return 0;
}