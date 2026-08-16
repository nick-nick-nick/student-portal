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

void displayMenu() {
    cout << "\n===== Student Portal Menu =====" << endl;
    cout << "1. View Profile" << endl;
    cout << "2. View Courses" << endl;
    cout << "3. View Settings" << endl;
    cout << "4. Logout" << endl;
}

void displaySettings() {
    cout << "\n===== Portal Settings =====" << endl;
    cout << "Theme: Default" << endl;
    cout << "Notifications: Enabled" << endl;
}

int main() {
    printWelcomeMessage();
    greetUser();

    Student student{"Nikhilesh Patil", 101, "Computer Science"};
    displayStudent(student);
    displayMenu();
    displaySettings();

    cout << "Program finished successfully." << std::endl;

    return 0;
}