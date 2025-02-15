#include <iostream>
#include <string>

using namespace std;

// Base class
class Student {
protected:
    int rollNumber;
    string name;
public:
    void getStudentDetails() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cin.ignore(); // To ignore the newline character left in the buffer
        cout << "Enter name: ";
        getline(cin, name);
    }

    void displayStudentDetails() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }
};

// Derived class
class Result : public Student {
private:
    float marks1, marks2, marks3;
public:
    void getMarks() {
        cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
        cout << "Enter marks for subject 3: ";
        cin >> marks3;
    }

    void displayResult() {
        float total = marks1 + marks2 + marks3;
        float percentage = total / 3;

        displayStudentDetails();
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
        cout << "Marks in Subject 3: " << marks3 << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Result student;

    student.getStudentDetails();
    student.getMarks();
    student.displayResult();

    return 0;
}
