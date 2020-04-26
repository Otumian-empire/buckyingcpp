#include <iostream>
#include "Area.h"

using namespace std;

int main()
{
    Area area(2, 3);

    int result = area.calculateArea();

    cout << "The area of a rectangle of sides, 2 and 3 is " << result << endl;
    return 0;
}


