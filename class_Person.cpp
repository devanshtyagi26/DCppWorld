#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;

public:
    Person(const string& n) : name(n) {}

    virtual void display() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
private:
    string course;
    int marks;
    int year;

public:
    Student(const string& n, const string& c, int m, int y) : Person(n), course(c), marks(m), year(y) {}

    void display() override {
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
        cout << "Year: " << year << endl;
    }
};

class Employee : public Person {
private:
    string department;
    double salary;

public:
    Employee(const string& n, const string& d, double s) : Person(n), department(d), salary(s) {}

    void display() override {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Person* p1 = new Person("Devansh Tyagi");
    Person* p2 = new Student("Ravi Kumar", "Computer Science", 90, 2023);
    Person* p3 = new Employee("Bhanu", "IT Department", 5000.0);

    p1->display();
    cout << endl;
    p2->display();
    cout << endl;
    p3->display();

    delete p1;
    delete p2;
    delete p3;

    return 0;
}
