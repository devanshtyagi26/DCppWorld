#include <bits/stdc++.h>
using namespace std;

void displayMatrix(int** matrix, int n, int m){
    cout << "\nMatrix:\n";
    for(int i = 0; i < n; i++){
        cout << "[ ";
        for(int j = 0; j<m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << "]" << endl;
    }

}

void sumMatrix(int** matrix1, int** matrix2, int** sum){
    
}

int main(){
    while (true){
        cout << "MATRIX Operations\n";
        cout << "------------------\n\n";
        cout << "1. Insert Matrix\n";
        cout << "2. Insert second Matrix\n";
        cout << "3. Sum of two Matrices\n";
        cout << "4. Product of two Matrices\n";
        cout << "5. Transpose of matrix\n\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        cout << endl;

        int** matrix1 = nullptr;
        int** matrix2 = nullptr;
        int** sum = nullptr;
        int n,m;

        switch (choice){
            case 1:
                cout << "Enter the number of rows of the matrix: ";
                cin >> n;
                cout << "Enter the number of columns of the matrix: ";
                cin >> m;
                
                createMatrix(matrix1, n, m);
                displayMatrix(matrix1, n, m);
                cout << endl;
                break;

            case 2:
                cout << "Creating the second matrix.\n\n"
                cout << "Enter the number of rows of the matrix: ";
                cin >> n;
                cout << "Enter the number of columns of the matrix: ";
                cin >> m;
                
                createMatrix(matrix2, n, m);
                displayMatrix(matrix2, n, m);
                cout << endl;
                break;

            case 3;
                if(matrix1 == nullptr || matrix2 == nullptr){
                    cout << "Assign the matrices first.";
                    break;
                }
                else{
                    cout << "After adding matrix 1 and 2, the resulting matrix will be:\n";

                }
        }
        cout << "\n\n";
        
    }
}