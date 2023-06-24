#include <bits/stdc++.h>
using namespace std;

int binarySearchRecursive(int arr[], int target, int start, int end){
    if (start > end) {
        return -1;
    }
    int mid = (start + end)/2;

    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid]<target){
        return binarySearchRecursive(arr, target, end, mid+1);
    }
    else{
        return binarySearchRecursive(arr, target, mid-1, start);
    }
}

int main(){
    cout << "Search a given element in a set of N numbers using Binary search with recursion.\n";

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

    int ans = binarySearchRecursive(arr, n, 0, size - 1);

    if(ans != -1){
        cout << "The element " << n << " is at the index " << ans;
    }
    else{
        cout << "The element is not present in the array.";
    }
    return 0;
}