#include <iostream>
int age=12;

int main() {
    int age = 14;

    // using the age in the global scope
    std::cout<<::age<<std::endl;

    return 0;
}
