#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    int seats = 10;
    int i = 1;
    while (i <= rows)
    {
        cout << "Row" << i << ": ";
        int j = 1;
        while (j <= seats)
        {
            cout << "Seat" << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}