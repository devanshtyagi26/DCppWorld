#include <bits/stdc++.h>
using namespace std;

int bSearch(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;

    while(start < end){
        if(arr[mid] == target){
            return mid;
        }
        if(target < arr[mid]){
            end = mid;
        }
        else{
            start = mid;
        }
        mid = (start + end)/2;
    }
    return -1;
}

int main(){
    cout << "Search a given element in a set of N numbers using Binary search without recursion.\n";

    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];
    cout << "\nEnter the elements in ascending order\n";

    for(int i = 0; i<size; i++){
        int temp;
        cout << "Enter the element of index " << i << " : ";
        cin >> temp;
        arr[i] = temp;
    }
    int n;
    cout << "\nEnter the number to search: ";
    cin >> n;

    int ans = bSearch(arr, size, n);
    if(ans != -1){
        cout << "The element " << n << " is at the index " << ans;
    }
    else{
        cout << "The element is not present in the array.";
    }
    return 0;
}