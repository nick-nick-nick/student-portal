#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int rollNumber;
    string department;
    string email;
    bool active;
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

void displayMenu() {
    cout << "\n===== Student Portal Menu =====" << endl;
    cout << "1. View Profile" << endl;
    cout << "2. View Courses" << endl;
    cout << "3. View Settings" << endl;
    cout << "4. Logout" << endl;
}

void displayProfile(const Student& student) {
    cout << "\n===== Student Profile =====" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Department: " << student.department << endl;
    cout << "Email: " << student.email << endl;
    cout << "Status: " << (student.active ? "Active" : "Inactive") << endl;
}

int main() {
    printWelcomeMessage();
    greetUser();

    Student student{"Nikhilesh Patil", 101, "Computer Science","nikhilesh.patil@gmail.com",true};
    displayStudent(student);
    displayProfile(student);
    displayMenu();

    cout << "Program finished successfully." << std::endl;

    return 0;
}