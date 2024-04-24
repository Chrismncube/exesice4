#include <iostream>

using namespace std;

int main() {
    char choice;
    int num1, num2;
    string div="============================================";
    do {cout<<div<<endl;
        cout << "Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout<<div<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == '1') {
            cout << "Enter two integers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 + num2 << endl;
        } else if (choice == '2') {
            cout << "Enter two integers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 - num2 << endl;
        } else if (choice == '3') {
            cout << "Enter two integers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 * num2 << endl;
        } else if (choice == '4') {
            cout << "Enter two integers: ";
            cin >> num1 >> num2;
            if (num2 == 0) {
                cout << "The second integer is zero, divide by zero" << endl;
            } else {
                cout << "Result: " << static_cast<float>(num1) / num2 << endl;
            }
        } else {
            cout << "Invalid choice!" << endl;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    } while(choice == 'y' || choice == 'Y');

    return 0;
}
