#include <iostream>
using namespace std;

int main() {
    int a, b;
    char operation;
    cout << "First number: ";
    cin >> a;
    cout << "Second number: ";
    cin >> b;
    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;
    if (operation == '+'){
        cout << "Result of " << a << " + " << b << " = " << a + b << endl;
    }
    else if (operation == '-'){
        cout << "Result of " << a << " - " << b << " = " << a - b << endl;
    }
    else if (operation == '*'){
       cout << "Result of " << a << "* " << b << " = " << a * b << endl;
    }
    else if (operation == '/'){
        if (b == 0){
            cout << "Value Error: Division by zero is not possible" << endl;
        }
        else{
            cout << "Result of " << a << " / " << b << " = " << a / b << endl;
        }
    }
    else{
        cout << "Invalid operator." << endl;
    }
    return 0;
}
