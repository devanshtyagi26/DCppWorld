#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> nums(n);

    for(int i = 0; i<n; i++){
        int val;
        cout<<"Enter the value of index "<<i<<":";
        cin>>val;
        nums[i] = val;};

    cout<<"\nArray\n{";

    int max = nums[0];
    for(int i = 0; i<n; i++){
        cout<<nums[i]<<" ";
        if(max<nums[i]){
            max = nums[i];
        }
    }
    cout<<"}\n\n";

    cout<<"So the Largest number of this array will be "<<max;


    return 0;
}