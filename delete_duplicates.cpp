#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cout << "Enter the array element "<<i<<" : ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "\nArray before deleting duplicates:\n{ ";
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "}\n";

    set<int> s(arr, arr + n);

    int i = 0;
    for(int x : s) {
        arr[i] = x;
        i++;
    }

    n = s.size();
    cout << "\nArray after deleting duplicates:\n{ ";
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "}";
    return 0;
}