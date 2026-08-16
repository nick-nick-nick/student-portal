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
void displaySettings() {
    cout << "\n===== Portal Settings =====" << endl;
    cout << "Theme: Default" << endl;
    cout << "Notifications: Enabled" << endl;
    cout << "Language: English" << endl;
    cout << "Notification Frequency: Daily" << endl;
    cout << "Profile Visibility: Private" << endl;

}


void displayNotifications() {
    cout << "\n===== Notifications =====" << endl;
    cout << "You have 3 new notifications." << endl;
    cout << "1. Assignment deadline approaching." << endl;
    cout << "2. New message from administration." << endl;
    cout << "Unread notifications: 2" << endl;
    cout << "3. Course registration window is open." << endl;
    cout << "Priority: High" << endl;
    cout << "Unread notification count: 2" << endl;
    cout << "Notification center status: Active" << endl;
}

int main() {
    printWelcomeMessage();
    greetUser();

    Student student{"Nikhilesh Patil", 101, "Computer Science","nikhilesh.patil@gmail.com",true,2026};
    displayStudent(student);

    displayNotifications();

    displayProfile(student);

    displayDashboard(student);

    displayMenu();
    displaySettings();

    bool loggedIn = loginUser("student", "portal123");

    if (loggedIn) {
        cout << "Login successful. Welcome back!" << endl;
    } else {
        cout << "Login failed. Invalid credentials." << endl;
    }
    
    cout << "Program finished successfully." << std::endl;

    return 0;
}