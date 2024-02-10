#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
private:
    static int nextId;
    int id;
    string name;
    string email;

public:
    Student(const string &name, const string &email);
    int getId() const;
    string getName() const;
    string getEmail() const;
    void displayDetails() const;
};

int Student::nextId = 1;

Student::Student(const string &name, const string &email) {
    id = nextId++;
    this->name = name;
    this->email = email;
}

int Student::getId() const {
    return id;
}

string Student::getName() const {
    return name;
}

string Student::getEmail() const {
    return email;
}

void Student::displayDetails() const {
    cout << "Student ID: " << id << ", Name: " << name << ", Email: " << email << endl;
}

class Test {
private:
    static int nextId;
    int id;
    string courseName;
    string testName;
    string dateTime;

public:
    Test(const string &courseName, const string &testName, const string &dateTime);
    int getId() const;
    string getCourseName() const;
    string getTestName() const;
    string getDateTime() const;
    void displayDetails() const;
};

int Test::nextId = 1;

Test::Test(const string &courseName, const string &testName, const string &dateTime) {
    id = nextId++;
    this->courseName = courseName;
    this->testName = testName;
    this->dateTime = dateTime;
}

int Test::getId() const {
    return id;
}

string Test::getCourseName() const {
    return courseName;
}

string Test::getTestName() const {
    return testName;
}

string Test::getDateTime() const {
    return dateTime;
}

void Test::displayDetails() const {
    cout << "Test ID: " << id << ", Course Name: " << courseName << ", Test Name: " << testName << ", Date/Time: " << dateTime << endl;
}

class TestResult {
private:
    int testId;
    int studentId;
    int grade;

public:
    TestResult(int testId, int studentId, int grade);
    int getTestId() const;
    int getStudentId() const;
    int getGrade() const;
    void displayDetails() const;
};

TestResult::TestResult(int testId, int studentId, int grade) {
    this->testId = testId;
    this->studentId = studentId;
    this->grade = grade;
}

int TestResult::getTestId() const {
    return testId;
}

int TestResult::getStudentId() const {
    return studentId;
}

int TestResult::getGrade() const {
    return grade;
}

void TestResult::displayDetails() const {
    cout << "Test ID: " << testId << ", Student ID: " << studentId << ", Grade: " << grade << endl;
}

class Application {
private:
    vector<Student> students;
    vector<Test> tests;
    vector<TestResult> testResults;

public:
    void addStudent();
    void editStudent();
    void removeStudent();
    void addTest();
    void editTest();
    void removeTest();
    void addTestResult();
    void editTestResult();
    void removeTestResult();
    void showAllInfo();
    void displayMenu();
};

void Application::addStudent() {
    string name, email;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter student email: ";
    cin >> email;
    students.emplace_back(name, email);
}

void Application::editStudent() {
    int id;
    cout << "Enter student ID to edit: ";
    cin >> id;
    // Find student with given ID and edit details
}

void Application::removeStudent() {
    int id;
    cout << "Enter student ID to remove: ";
    cin >> id;
    // Remove student with given ID
}

void Application::addTest() {
    string courseName, testName, dateTime;
    cout << "Enter course name: ";
    cin >> courseName;
    cout << "Enter test name: ";
    cin >> testName;
    cout << "Enter date/time: ";
    cin >> dateTime;
    tests.emplace_back(courseName, testName, dateTime);
}

void Application::editTest() {
    int id;
    cout << "Enter test ID to edit: ";
    cin >> id;
    // Find test with given ID and edit details
}

void Application::removeTest() {
    int id;
    cout << "Enter test ID to remove: ";
    cin >> id;
    // Remove test with given ID
}

void Application::addTestResult() {
    int testId, studentId, grade;
    cout << "Enter test ID: ";
    cin >> testId;
    cout << "Enter student ID: ";
    cin >> studentId;
    cout << "Enter grade: ";
    cin >> grade;
    testResults.emplace_back(testId, studentId, grade);
}

void Application::editTestResult() {
    int testId, studentId;
    cout << "Enter test ID to edit: ";
    cin >> testId;
    cout << "Enter student ID to edit: ";
    cin >> studentId;
    // Find test result with given test ID and student ID, and edit grade
}

void Application::removeTestResult() {
    int testId, studentId;
    cout << "Enter test ID to remove: ";
    cin >> testId;
    cout << "Enter student ID to remove: ";
    cin >> studentId;
    // Remove test result with given test ID and student ID
}

void Application::showAllInfo() {
    cout << "Student details:" << endl;
    for (const auto &student : students) {
        student.displayDetails();
    }
    cout << endl;

    cout << "Test details:" << endl;
    for (const auto &test : tests) {
        test.displayDetails();
    }
    cout << endl;

    cout << "Test results:" << endl;
    for (const auto &result : testResults) {
        result.displayDetails();
    }
    cout << endl;
}

void Application::displayMenu() {
    int choice;
    do {
        cout << "Please choose:" << endl;
        cout << "1. Add student" << endl;
        cout << "2. Edit student" << endl;
        cout << "3. Remove student" << endl;
        cout << "4. Add test" << endl;
        cout << "5. Edit test" << endl;
        cout << "6. Remove test" << endl;
        cout << "7. Add test result" << endl;
        cout << "8. Edit test result" << endl;
        cout << "9. Remove test result" << endl;
        cout << "10. Show all info" << endl;
        cout << "11. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                editStudent();
                break;
            case 3:
                removeStudent();
                break;
            case 4:
                addTest();
                break;
            case 5:
                editTest();
                break;
            case 6:
                removeTest();
                break;
            case 7:
                addTestResult();
                break;
            case 8:
                editTestResult();
                break;
            case 9:
                removeTestResult();
                break;
            case 10:
                showAllInfo();
                break;
            case 11:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 11);
}

int main() {
    Application app;
    app.displayMenu();
    return 0;
}
