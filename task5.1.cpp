#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    int seats = 10;
    for (int i = 1; i <= rows; i++)
    {
        cout << "Rows" << i << ": ";
        for (int j = 1; j <= seats; j++)
        {
            cout << "Seat" << j << " ";
        }
        cout << endl;
    }
    return 0;
}