#include <iostream>
using namespace std;

int main() {
    int first_num, second_num, sum_nums;

    cout << "Enter the first number: ";
    cin >> first_num;

    cout << "Enter the second number: ";
    cin >> second_num;

    sum_nums = first_num + second_num;

    cout << "The sum of " << first_num << " and " << second_num
        << " is " << sum_nums << endl;

    return 0;
}