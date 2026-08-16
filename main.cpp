#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int rollNumber;
    string department;
    string email;
    bool active;
    int enrollmentYear;
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

bool validateUsername(const string& username) {
    return username == "student";
}

bool validatePassword(const string& password) {
    return password.length() >= 8;
}

bool loginUser(const string& username, const string& password) {
    return validateUsername(username) &&
           validatePassword(password) &&
           password == "portal123";
}

void displayProfile(const Student& student) {
    cout << "\n===== Student Profile =====" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Department: " << student.department << endl;
    cout << "Email: " << student.email << endl;
    cout << "Status: " << (student.active ? "Active" : "Inactive") << endl;
    cout << "Enrollment Year: " << student.enrollmentYear << endl;

}
void displayDashboard(const Student& student) {
    cout << "\n===== Student Dashboard =====" << endl;
    cout << "Welcome, " << student.name << "!" << endl;
    cout << "Department: " << student.department << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Enrolled Courses: 5" << endl;
    cout << "Attendance: 92%" << endl;
    cout << "Pending Tasks: 2" << endl;

}

int main() {
    printWelcomeMessage();
    greetUser();

    Student student{"Nikhilesh Patil", 101, "Computer Science","nikhilesh.patil@gmail.com",true,2026};
    displayStudent(student);

    displayProfile(student);

    displayDashboard(student);

    displayMenu();

    bool loggedIn = loginUser("student", "portal123");

    if (loggedIn) {
        cout << "Login successful. Welcome back!" << endl;
    } else {
        cout << "Login failed. Invalid credentials." << endl;
    }
    
    cout << "Program finished successfully." << std::endl;

    return 0;
}