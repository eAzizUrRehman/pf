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

void deleteStudentRecordByIndex(Student students[], int &count, int maxSize)
{
    if (count < 1)
    {
        cout << "\n\tNo student records to delete." << endl;
        return;
    }

    int index;

    cout << "\n\tEnter student's index to delete: ";

    cin >> index;

    if (index >= maxSize)
    {
        cout << "\n\tNo student found at the given index." << endl;
        return;
    }

    // Shift the elements of the array
    for (int j = index; j < count - 1; j++)
        students[j] = students[j + 1];

    cout << "\n\tStudent record deleted successfully." << endl;
    count--;
}

void deleteStudentRecordByName(Student students[], int &count)
{
    if (count < 1)
    {
        cout << "\nNo student records to delete." << endl;
        return;
    }

    string nameToDelete;

    cout << "\n\tEnter student's name to delete: ";

    cin >> nameToDelete;

    int i;
    for (i = 0; i < count; i++)
    {
        if (students[i].name == nameToDelete)
            break;
    }

    if (i == count)
    {
        cout << "\n\tNo student found with the given name." << endl;
        return;
    }

    // Shift the elements of the array
    for (int j = i; j < count - 1; j++)
        students[j] = students[j + 1];

    cout << "\n\tStudent record deleted successfully." << endl;
    count--;
}

void deleteStudentRecordByRollNo(Student students[], int &count)
{
    if (count < 1)
    {
        cout << "\nNo student records to delete." << endl;
        return;
    }

    int rollNoToDelete;

    cout << "\n\tEnter student's roll no to delete: ";

    cin >> rollNoToDelete;

    int i;
    for (i = 0; i < count; i++)
    {
        if (students[i].rollNumber == rollNoToDelete)
            break;
    }

    if (i == count)
    {
        cout << "\n\tNo student found with the given roll number." << endl;
        return;
    }

    // Shift the elements of the array
    for (int j = i; j < count - 1; j++)
        students[j] = students[j + 1];

    count--;
    cout << "\n\tStudent record deleted successfully." << endl;
}

void deleteAllStudentsRecords(Student students[], int &count)
{
    count = 0; // reset the count

    cout << "\n\tAll student records deleted successfully." << endl;
}

void updateStudentRecordByIndex(Student students[], int &count, int maxSize)
{
    if (count < 1)
    {
        cout << "\n\tNo student records to update." << endl;
        return;
    }

    int index;

    cout << "\n\tEnter student's index to update: ";

    cin >> index;

    if (index >= maxSize)
    {
        cout << "\n\tNo student found at the given index." << endl;
        return;
    }

    cout << "\n\tEnter updated name: ";
    cin >> students[index].name;
    cout << "\tEnter updated roll number: ";
    cin >> students[index].rollNumber;
    cout << "\tEnter updated marks: ";
    cin >> students[index].marks;

    cout << "\n\tStudent record updated successfully." << endl;
}

void updateStudentRecordByName(Student students[], int &count)
{
    if (count < 1)
    {
        cout << "\nNo student records to update." << endl;
        return;
    }

    string nameToUpdate;

    cout << "\n\tEnter student's name to update: ";

    cin >> nameToUpdate;

    int i;
    for (i = 0; i < count; i++)
    {
        if (students[i].name == nameToUpdate)
            break;
    }

    if (i == count)
    {
        cout << "\n\tNo student found with the given name." << endl;
        return;
    }

    cout << "\n\tEnter updated name: ";
    cin >> students[i].name;
    cout << "\tEnter updated roll number: ";
    cin >> students[i].rollNumber;
    cout << "\tEnter updated marks: ";
    cin >> students[i].marks;

    cout << "\n\tStudent record updated successfully." << endl;
}

void updateStudentRecordByRollNo(Student students[], int &count)
{
    if (count < 1)
    {
        cout << "\nNo student records to update." << endl;
        return;
    }

    int rollNoToUpdate;

    cout << "\n\tEnter student's roll no to update: ";

    cin >> rollNoToUpdate;

    int i;
    for (i = 0; i < count; i++)
    {
        if (students[i].rollNumber == rollNoToUpdate)
            break;
    }

    if (i == count)
    {
        cout << "\n\tNo student found with the given roll number." << endl;
        return;
    }

    cout << "\n\tEnter updated name: ";
    cin >> students[i].name;
    cout << "\tEnter updated roll number: ";
    cin >> students[i].rollNumber;
    cout << "\tEnter updated marks: ";
    cin >> students[i].marks;

    cout << "\n\tStudent record updated successfully." << endl;
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
        cout << "\t3. Delete a Student Record [By Index]\n";
        cout << "\t4. Delete a Student Record [By Name]\n";
        cout << "\t5. Delete a Student Record [By Roll Number]\n";
        cout << "\t6. Delete All Student Records\n";
        cout << "\t7. Update a Student Record [By Index]\n";
        cout << "\t8. Update a Student Record [By Name]\n";
        cout << "\t9. Update a Student Record [By Roll Number]\n";
        cout << "\t99. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudentRecord(students, count, maxSize);
            break;

        case 2:
            displayAllStudentRecords(students, count);
            break;

        case 3:
            deleteStudentRecordByIndex(students, count, maxSize);
            break;

        case 4:
            deleteStudentRecordByName(students, count);
            break;

        case 5:
            deleteStudentRecordByRollNo(students, count);
            break;

        case 6:
            deleteAllStudentsRecords(students, count);
            break;

        case 7:
            updateStudentRecordByIndex(students, count, maxSize);
            break;

        case 8:
            updateStudentRecordByName(students, count);
            break;

        case 9:
            updateStudentRecordByRollNo(students, count);
            break;

        case 99:
            cout << "Exiting program. Thank you for using Student Management System!" << endl;
            break;

        default:
            cout << "Invalid choice. Please enter again." << endl;
        }
    }

    return 0;
}