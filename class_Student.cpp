#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
        int roll_no;
        string name;
        int Class;
        int year;
        int marks;
    
    public:
        Student() {}

        Student(int roll_no, string& name, int Class, int year, int marks) : roll_no(roll_no), name(name), Class(Class), year(year), marks(marks) {}

        void input() {
            cout << "Enter Roll No.: ";
            cin >> roll_no;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Class: ";
            cin >> Class;
            cout << "Enter Year: ";
            cin >> year;
            cout << "Enter Marks: ";
            cin >> marks;
        }

        void display(){
            cout << "Roll No.: " << roll_no << endl;
            cout << "Name: " << name << endl;
            cout << "Class: " << Class << endl;
            cout << "Year: " << year << endl;
            cout << "Marks: " << marks << endl;
        }

        void writeToFile(ofstream& file, int i){
        file << "==== Student " << i+1 << " ====" << endl;
        file << "Roll No.: " << roll_no << endl;
        file << "Name: " << name << endl;
        file << "Class: " << Class << endl;
        file << "Year: " << year << endl;
        file << "Marks: " << marks << endl;
        file << endl;
        }

};

int main(){
    const string fileName = "student.txt";
    int number;
    cout << "Enter the number of entries you want :";
    cin >> number;
    cout << endl;

    ofstream outFile(fileName);
    if(!outFile){
        cerr << "Error opening file for writing! " << endl;
        return 1;
    }

    for (int i = 0; i < number; i++){
        cout << "==== Student " << i+1 << " ====\n";
        Student student;
        student.input();
        student.writeToFile(outFile, i);
        cout << endl;
    }
    outFile.close();

    ifstream inFile(fileName);
    if (!inFile){
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    string line;
    while(getline(inFile, line)){
        cout << line << endl;
    }
    inFile.close();

    return 0;
}