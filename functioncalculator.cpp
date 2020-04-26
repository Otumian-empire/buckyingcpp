#include <iostream>
using namespace std;

void doCalculation(int param_a, int param_b, char ops);

int main() {
    doCalculation(2, 4, '+');

    doCalculation(10, 4, '%');

    doCalculation(25, 5, '/');

    return 0;
}

void doCalculation(int param_a, int param_b, char ops) {

    if (ops == '+') {
        cout << param_a + param_b;
    } else if (ops == '-') {
        cout << param_a - param_b;
    } else if (ops == '*') {
        cout << param_a * param_b;
    } else if (ops == '/') {
        cout << param_a / param_b;
    } else if (ops == '%') {
        cout << param_a % param_b;
    }

    cout << endl;
}