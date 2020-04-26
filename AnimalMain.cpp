#include <iostream>

#include "Animal.h"


using namespace std;

int main()
{

    Animal aObj();
//    aObj.setAge(23);
//    aObj.setSex('m');
//    aObj.setId("10825744");

    cout << "This unique animal has a gender "
         << aObj.getSex() << ", it is " << aObj.getAge()
         << " years and has an id, " << aObj.getId() << endl;
}
