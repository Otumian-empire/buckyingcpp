#include <iostream>
using namespace std;

int getAge(int birth_year);

int main() {

    int yob, age;

    cout << "Enter year of birth: ";
    cin >> yob;

    age = getAge(yob);

    cout << "age: " << age << endl;

    return 0;
}

int getAge(int birth_year) {
    int current_year = 2020;

    return current_year - birth_year;
}