#include <iostream>
#include "struct.hpp"
using namespace std;
int main() {

    int choice;
    while(1) {
        cout<<"\n===========================\n";
        cout<<"\nMAIN MENU - SELECT PROBLEM\n";
        cout<<"\n===========================\n";
        cout<<" 0. Stack Operations\n";
        cout<<" 00. Queue Operations\n";
        cout<<" 1. Student Struct\n";
        cout<<" 2. Point Distance\n";
        cout<<" 3. Pointer Access\n";
        cout<<" 4. Product Array\n";
        cout<<" 5. Rectangle Area\n";
        cout << "6. Time Addition\n";
        cout << "7. Increment via Pointer\n";
        cout << "8. NULL Pointer\n";
        cout << "9. Single Pointer Multiple Nodes\n";
        cout << "10. Linked Nodes\n";
        cout << "11. Exit Program\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 0:
                stackMenu();
                break;
            // case 00:
            //     queueMenu();
            //     break;
            case 1:
                problem1();
                break;
            case 2:
                problem2();
                break;
            case 3:
                problem3();
                break;
            case 4:
                problem4();
                break;
            case 5:
                problem5();
                break;
            case 6:
                problem6();
                break;
            case 7:
                problem7();
                break;
            case 8:
                problem8();
                break;
            case 9:
                problem9();
                break;
            case 10:
                problem10();
                break;
            case 11:
                cout << "Exiting program. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}