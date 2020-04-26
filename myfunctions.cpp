#include <iostream>
using namespace std;

int addNumbers(int a, int b) {
    int answer = a + b;

    return answer;
}

int main() {
    int a, b;

    cout << "enter two numbers, seperated by a space: ";
    cin >> a >> b;

    cout << "The sum of " << a << " and " << b << " is " << addNumbers(a,
            b) << endl;
    return 0;
}
