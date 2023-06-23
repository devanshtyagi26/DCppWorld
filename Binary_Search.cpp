#include <iostream>
using namespace std;

int find(int arr[], int target, int size){
    int start = 0;
    int end = size -1 ;
    int mid = (start + end)/2;

    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start + end)/2;
    }
    return -1;
}

int main(){
    int nums[8] = {12,16,37,48,58,95,1245,5649};
    int size = sizeof(nums)/4;
    int n;
    cout<<"Enter the number you want to search: ";
    cin>>n;
    int ans = find(nums, n, size);
    if(ans!=-1){
    cout<<"The number "<<n<<" is at "<<ans<<" index.";
    }
    else{
        cout<<"The entered number is not in list";
    }
    return 0;
}