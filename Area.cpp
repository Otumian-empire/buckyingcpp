#include "Area.h"

Area::Area()
{
    //empyt ctor
}

Area::Area(int fp, int sp)
{
    Area::firstParam = fp;
    Area::secondParam = sp;
}

int Area::calculateArea()
{
    return Area::firstParam * Area::secondParam;
}

int Area::getFirstParam()
{
    return Area::firstParam;
}

int Area::getSecondParam()
{
    return Area::secondParam;
}

void Area::setFirstParam(int fp)
{
    Area::firstParam = fp;
}

void Area::setSecondParam(int sp)
{
    Area::secondParam = sp;
}
