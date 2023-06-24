#include <bits/stdc++.h>
using namespace std;

void mergedArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[]){
    int i = 0, j = 0, k = 0;

    while(i<size1 && j<size2){
        if(arr1[i] <= arr2[j]){
            mergedArray[k] = arr1[i];
            i++;
        }
        else{
            mergedArray[k] = arr2[j];
            j++;
        }
        k++;
    }

    while(i < size1){
        mergedArray[k] = arr1[i];
        i++;
        k++;
    }

    while(j < size2){
        mergedArray[k] = arr2[j];
        j++;
        k++;
    }
}

void displayArray(int arr[], int size){
    cout << "The merged array is\n{";
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << "}";
}

int main(){
    int n,m,t;

    cout << "Enter the size of first array: ";
    cin >> n;
    cout << "\n\n";
    int arr1[n];
    cout << "Enter the elements (in ascending order)";
    for(int i = 0; i<n; i++){
        cout << "Enter the value of element " << i << " : ";
        cin >> t;
        arr1[i] = t;
    }
    cout << "\n\nEnter the size of second array: ";
    cin >> m;
    cout << "\n\n";
    int arr2[m];

    cout << "Enter the elements (in ascending order)";
    for(int i = 0; i<m; i++){
        cout << "Enter the value of element " << i << " : ";
        cin >> t;
        arr2[i] = t;
    }
    cout << "\n\n";
    int mergedSize = n + m;
    int mergedArray[mergedSize];

    mergedArrays(arr1, n, arr2, m, mergedArray);
    displayArray(mergedArray, mergedSize);

    return 0;
}