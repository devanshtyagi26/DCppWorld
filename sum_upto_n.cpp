#include <iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    else{
    int temp = sum(n-1);
    return n + temp;
    }

}

int main(){
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;
    int ans = sum(n);
    cout<<endl<< "For n = "<<n<<" ans is ";
    cout<<ans;

    return 0;
}