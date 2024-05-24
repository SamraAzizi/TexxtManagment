# Student and Test Management System

This C++ program is a console application designed to manage students, tests, and test results. It allows users to add, edit, remove, and display information about students, tests, and their results.

## Features

- **Student Management**: Add, edit, remove, and display student information.
- **Test Management**: Add, edit, remove, and display test information.
- **Test Result Management**: Add, edit, remove, and display test results.
- **Menu-Driven Interface**: A simple text-based menu to navigate through different operations.

## Classes and Structure

### Student Class

Represents a student with an ID, name, and email.

- **Private Members**:
  - `static int nextId`: Static variable to generate unique IDs.
  - `int id`: Unique ID for each student.
  - `string name`: Name of the student.
  - `string email`: Email of the student.

- **Public Methods**:
  - `Student(const string &name, const string &email)`: Constructor to initialize a student with a name and email.
  - `int getId() const`: Returns the student's ID.
  - `string getName() const`: Returns the student's name.
  - `string getEmail() const`: Returns the student's email.
  - `void displayDetails() const`: Displays student details.

### Test Class

Represents a test with an ID, course name, test name, and date/time.

- **Private Members**:
  - `static int nextId`: Static variable to generate unique IDs.
  - `int id`: Unique ID for each test.
  - `string courseName`: Course name for the test.
  - `string testName`: Name of the test.
  - `string dateTime`: Date and time of the test.

- **Public Methods**:
  - `Test(const string &courseName, const string &testName, const string &dateTime)`: Constructor to initialize a test.
  - `int getId() const`: Returns the test's ID.
  - `string getCourseName() const`: Returns the course name.
  - `string getTestName() const`: Returns the test name.
  - `string getDateTime() const`: Returns the date and time
