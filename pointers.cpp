#include <iostream>
using namespace std;

void swapVal(int val1, int val2);
void swapRef(int *addr1, int *addr2);


int main()
{

    int x = 12;

    cout << "The address of " << x << " is " << &x << endl;

    int *addrx = &x;

    cout << "The address of the x is " << addrx << endl;

    cout << "The value pointed to is " << *addrx << endl;

    int kwame = 23, joe = 30;

    cout << "kwame = " << kwame << " - " << " joe = " << joe << endl;

    swapVal(kwame, joe);

    cout << "after swapVal" << endl;
    cout << "kwame = " << kwame << " - " << " joe = " << joe << endl;

    kwame = 12, joe = 0;

    cout << "kwame = " << kwame << " - " << " joe = " << joe << endl;

    swapRef(&kwame, &joe);

    cout << "after swapRef" << endl;
    cout << "kwame = " << kwame << " - " << " joe = " << joe << endl;

    return 0;
}

void swapVal(int val1, int val2)
{
    int temp = val1;
    val1 = val2;
    val2 = temp;
}

void swapRef(int *addr1, int *addr2)
{
    int temp = *addr1;
    *addr1 = *addr2;
    *addr2 = temp;
}
