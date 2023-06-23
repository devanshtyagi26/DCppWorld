#include <bits/stdc++.h>
using namespace std;

void showAddress(const char* str){
    for(int i = 0; str[i] != '\0'; i++){
        cout << "Character: " << str[i] << "\tAddress: " << (void*) &str[i] << endl;
    }
}

void concatenateStrings(char* result, const char* str1, const char* str2) {
    int i = 0;
    int j = 0;

    while (str1[i] != '\0') {
        result[j] = str1[i];
        i++;
        j++;
    }

    i = 0;

    while (str2[i] != '\0') {
        result[j] = str2[i];
        i++;
        j++;
    }

    result[j] = '\0';
    cout << "Concatinated String: " << result << "\n\n";
}

int compareStrings(const char* str1, const char* str2) {
    int i = 0;

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] < str2[i])
            return -1;
        else if (str1[i] > str2[i])
            return 1;
        i++;
    }

    return 0;
}

int calculateLength(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

void convertToUppercase(char* str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32;
        }
        str++;
    }
}

void reverseString(char* str) {
    int length = 0;
    char* end = str;
    char temp;

    while (*end != '\0') {
        length++;
        end++;
    }

    end--;

    while (str < end) {
        temp = *str;
        *str = *end;
        *end = temp;

        str++;
        end--;
    }
}

void insertString(char* mainString, const char* subString, int position) {
    int mainLength = calculateLength(mainString);
    int subLength = calculateLength(subString);

    for (int i = mainLength; i >= position; i--) {
        mainString[i + subLength] = mainString[i];
    }

    for (int i = 0; i < subLength; i++) {
        mainString[position + i] = subString[i];
    }
}

int main(){
    char text[100];
    char text2[100];
    char result[200];
    int choice;
    int comp;
    int length;
    int position;

    while(true){
        cout << "String Manipulation Menu" << endl;
        cout << "------------------------" << endl;
        cout << "1. Enter first string" << endl;
        cout << "2. Enter second string" << endl;
        cout << "3. Show address of each character" << endl;
        cout << "4. Concatinate two strings" << endl;
        cout << "5. Compare two strings" << endl;
        cout << "6. Calculate the length of the string" << endl;
        cout << "7. Convert lowercase to uppercase characters" << endl;
        cout << "8. Reverse the string" << endl;
        cout << "9. Insert a string to another" << endl;
        cout << "10. Exit" << "\n\n\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter first string: ";
                cin.ignore();
                cin.getline(text, sizeof(text));
                cout<<endl;
                break;
            case 2:
                cout << "Enter second string: ";
                cin.ignore();
                cin.getline(text2, sizeof(text2));
                cout<<endl;
                break;
            case 3:
                cout << "Address of each character in the string: " << endl;
                showAddress(text);
                cout<<endl;
                break;
            case 4:
                concatenateStrings(result, text, text2);
                break;
            case 5:
                comp = compareStrings(text, text2);
                if (comp < 0){
                    cout << "String 1 is less than String 2" << endl;
                    }
                else if (comp > 0){
                    cout << "String 1 is greater than String 2" << endl;
                    }
                else{
                    cout << "String 1 is equal to String 2" << endl;
                    }
                cout << endl;
                break;
            case 6:
                length = calculateLength(text);
                cout << "The length of the string is " << length << "\n\n";
                break;
            case 7:
                cout << "The original string is: " << text <<endl;
                cout << "The updated string is: ";
                convertToUppercase(text);
                cout << text << "\n\n";
                break;
            case 8:
                cout << "The original string is: " << text <<endl;
                cout << "The reversed string is: ";
                reverseString(text);
                cout << text << "\n\n";
                break;
            case 9:
                cout << "Enter the position to insert the string at: ";
                cin >> position;

                if (position <0 || position > calculateLength(text)){
                    cout << "Invalid position, Please try again." <<endl;
                    break;
                }

                insertString(text, text2, position);
                cout << "Modified String: " << text << "\n\n";
                break;
            case 10:
                cout << "Exiting the program. Goodbye" << endl;
                return 0;
            default:
                cout << "Invalid choice please try again!!" << endl;


        }
    }
}