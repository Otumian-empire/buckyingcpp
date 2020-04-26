#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a_x_cord = 1;
    int a_y_cord = 3;

    int b_x_cord = 4;
    int b_y_cord = -2;

    int dx = b_x_cord - a_x_cord;
    int dy = b_y_cord - a_y_cord;

    int dx_sq = pow(dx, 2);
    int dy_sq = pow(dy, 2);

    int sum_dx_dy_sq = dx_sq + dy_sq; 

    double mag_ab = sqrt(sum_dx_dy_sq);

    cout << "The magnitude of the cordinates, A(" 
        << a_x_cord << "," << a_y_cord << ") and B("
        << b_x_cord << "," << b_y_cord << ") is "
        << mag_ab << endl;

    return 0;
}