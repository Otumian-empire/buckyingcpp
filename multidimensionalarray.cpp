#include <iostream>
using namespace std;


int main()
{
    int arr[3][3] =
    {
        {1, 2, 3},
        {-2, 3, 34},
        {0, 5, 6}
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j];

            if (j < 2)
            {
                cout << " ,";
            }

        }

        cout << endl;
    }


    return 0;
}
