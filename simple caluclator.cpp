#include <iostream>
using namespace std;

int main() {
    char op;
    double n1, n2;

    cout << "Simple Calculator" << endl;
    cout << "Choose an operation +, -, *, / ";
    cin >> op;

    cout << "Enter 2 numbers: ";
    cin >> n1 >> n2;

    switch (op) {
        case '+':
            cout << "Result: " << n1 << " + " << n2 << " = " << n1 + n2 << endl;
            break;
        case '-':
            cout << "Result: " << n1 << " - " << n2 << " = " << n1 - n2 << endl;
            break;
        case '*':
            cout << "Result: " << n1 << " * " << n2 << " = " << n1 * n2 << endl;
            break;
        case '/':
            if (n2 != 0) {
                cout << "Result: " << n1 << " / " << n2 << " = " << n1 / n2 << endl;
            } else {
                cout << "cant be divisoned by 0" << endl;
            }
            break;
        default:
            cout << "invalid operators" << endl;
    }

    return 0;
}