#include <iostream>
using namespace std;

int main()
{
    int weeks = 3;
    int days = 7;
    for (int i = 1; i <= weeks; i++)
    {
        cout << "Week" << i << ": ";
        for (int j = 1; j <= days; j++)
        {
            cout << "Day" << j << " ";
        }
        cout << endl;
    }
    return 0;
}