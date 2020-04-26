#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generateRandomNum()
{
    cout << (rand() % 6) + 1 << endl;
}

int main()
{
    srand(time(0));

    for (int i = 0; i < 6; i++)
    {
        generateRandomNum();
    }

    return 0;
}
