#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "enter two numbers: ";
    cin >> a >> b;

    cout << "add: " << a << " + " << b << " = " << a + b << endl;
    cout << "subt: " << a << " - " << b << " = " << a - b << endl;
    cout << "mult: " << a << " * " << b << " = " << a * b << endl;
    cout << "div: " << a << " / " << b << " = " << a / b << endl;
    cout << "mod: " << a << " % " << b << " = " << a % b << endl;

    return 0;
}
