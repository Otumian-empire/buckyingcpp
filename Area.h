#ifndef AREA_H
#define AREA_H


class Area
{
public:
    /** Default constructor */
    Area();

    /** constructor with first and second parameter */
    Area(int firstParam, int secondParam);

    int calculateArea();

    int getFirstParam();

    int getSecondParam();

    void setFirstParam(int fp);

    void setSecondParam(int sp);

private:
    int firstParam, secondParam;
};

#endif // AREA_H
