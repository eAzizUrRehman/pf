#include <iostream>
#include <string>

using namespace std;

// Define structure for Student
struct Student
{
    string name;
    int rollNumber;
    float marks;
};

// Function to add a student record to the database
void addStudentRecord(Student students[], int &count, int maxSize)
{
    if (count >= maxSize)
    {
        cout << "Cannot add more students. Database is full." << endl;
        return;
    }
    cout << "Enter name: ";
    cin >> students[count].name;
    cout << "Enter roll number: ";
    cin >> students[count].rollNumber;
    cout << "Enter marks: ";
    cin >> students[count].marks;
    count++;
    cout << "Student record added successfully." << endl;
}

// Function to display all student records in the database
void displayAllStudentRecords(const Student students[], int count)
{
    if (count == 0)
    {
        cout << "No student records to display." << endl;
        return;
    }
    cout << "\nAll Student Records:\n";
    for (int i = 0; i < count; ++i)
    {
        cout << "Name: " << students[i].name << ", Roll Number: " << students[i].rollNumber << ", Marks: " << students[i].marks << endl;
    }
}

int main()
{
    const int maxSize = 100;   // Maximum number of students in the database
    Student students[maxSize]; // Array to store student records
    int count = 0;             // Number of student records

    while (true)
    {
        int choice;
        cout << "\nStudent Management System\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Student Records\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            addStudentRecord(students, count, maxSize);
        }
        else if (choice == 2)
        {
            displayAllStudentRecords(students, count);
        }
        else if (choice == 3)
        {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}