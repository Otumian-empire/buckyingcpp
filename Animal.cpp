#include "Animal.h"
#include <iostream>

using namespace std;

//Animal::Animal()
//{
//    cout << "The animal contructor" << endl;
//}

//Animal::~Animal()
//{
//    cout << "The animal contructor" << endl;
//}

int Animal::getAge()
{
    return age;
}

char Animal::getSex()
{
    return sex;
}

std::string Animal::getId()
{
    return id;
}

void Animal::setAge(int sAge)
{
    age = sAge;
}

void Animal::setSex(char sSex)
{
    sex = sSex;
}

void Animal::setId(std::string sId)
{
    id = sId;
}
