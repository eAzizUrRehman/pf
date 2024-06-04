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
        cout << "\nCannot add more students. Database is full." << endl;
        return;
    }
    cout << "\n\tEnter name: ";
    cin >> students[count].name;
    cout << "\tEnter roll number: ";
    cin >> students[count].rollNumber;
    cout << "\tEnter marks: ";
    cin >> students[count].marks;
    count++;
    cout << "\nStudent record added successfully." << endl;
}

// Function to display all student records in the database
void displayAllStudentRecords(const Student students[], int count)
{
    if (count == 0)
    {
        cout << "\nNo student records to display." << endl;
        return;
    }

    cout << "\n----- All Student Records:\n";

    cout << "\n\tName\t\tRoll No\t\tMarks\n";

    for (int i = 0; i < count; ++i)
    {
        cout << "\t" << students[i].name << "\t\t" << students[i].rollNumber << "\t\t" << students[i].marks << endl;
    }
}

int main()
{
    const int maxSize = 100;   // Maximum number of students in the database
    Student students[maxSize]; // Array to store student records
    int count = 0;             // Number of student records

    cout << "\n----- Welcome to Student Management System -----\n";

    while (true)
    {
        int choice;
        cout << "\nMain Menu:\n";
        cout << "\t1. Add Student Record\n";
        cout << "\t2. Display All Student Records\n";
        cout << "\t3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
            addStudentRecord(students, count, maxSize);
        else if (choice == 2)
            displayAllStudentRecords(students, count);
        else if (choice == 3)
        {
            cout << "Exiting program. Thank you for using Student Management System!" << endl;
            break;
        }
        else
            cout << "Invalid choice. Please enter again." << endl;
    }

    return 0;
}