int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n1. Add Student";
        cout << "\n2. Display All Students";
        cout << "\n3. Search Student";
        cout << "\n4. Delete Student";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting program\n";
        }
    } while (choice != 5);

    return 0;
}


 
