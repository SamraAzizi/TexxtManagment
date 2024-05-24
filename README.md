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

