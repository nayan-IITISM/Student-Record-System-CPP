#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float marks;

    void input() {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll: " << roll
             << ", Name: " << name
             << ", Marks: " << marks << endl;
    }
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n--- Student Record Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // Add Student
            Student s;
            s.input();
            students.push_back(s);
            cout << "Student added successfully.\n";
        }
        else if (choice == 2) {
            // Display All Students
            if (students.empty()) {
                cout << "No records found.\n";
            } else {
                for (const auto &s : students) {
                    s.display();
                }
            }
        }
        else if (choice == 3) {
            // Search Student  (STEP D6)
            int searchRoll;
            cout << "Enter roll number to search: ";
            cin >> searchRoll;

            bool found = false;
            for (const auto &s : students) {
                if (s.roll == searchRoll) {
                    s.display();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student not found.\n";
            }
        }

    } while (choice != 5);

    cout << "Exiting program.\n";
    return 0;
}




 
