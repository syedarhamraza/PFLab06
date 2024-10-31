#include <iostream>
using namespace std;

int main()
{
    int weeks = 3;
    int days = 7;
    int i = 1;
    while (i <= weeks)
    {
        cout << "Week " << i << ": ";
        int j = 1;
        while (j <= days)
        {
            cout << "Day" << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}