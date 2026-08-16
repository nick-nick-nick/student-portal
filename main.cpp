#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int rollNumber;
    string department;
};

void displayStudent(const Student& student) {
    cout << "\nStudent Information" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Department: " << student.department << endl;
}
void printWelcomeMessage() {
    cout << "Welcome to Student Portal!" << endl;
}


void greetUser() {
    cout << "Hello, Student!" << endl;
}



int main() {
    printWelcomeMessage();
    greetUser();

    Student student{"Nikhilesh Patil", 101, "Computer Science"};
    displayStudent(student);

    cout << "Program finished successfully." << std::endl;

    return 0;
}