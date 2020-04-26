#include <iostream>
#include "Area.h"

using namespace std;

class MyMath {
  private:
    int firstParam, secondParam;

  public:
    MyMath(int fp, int sp) {
        firstParam = fp;
        secondParam = sp;
    }

    MyMath() {}

    int calculateArea() {
        return firstParam * secondParam;
    }

    void setFirstParam(int fp) {
        firstParam = fp;
    }

    void setSecondParam(int sp) {
        secondParam = sp;
    }

    int getFirstParam() {
        return firstParam;
    }

    int getSecondParam() {
        return secondParam;
    }
};

int main() {

    MyMath myMath(23, 4);

    cout << myMath.calculateArea() << endl;

    myMath.setFirstParam(200);

    cout << myMath.calculateArea() << endl;
    return 0;
}
