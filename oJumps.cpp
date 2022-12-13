#include <iostream>
using namespace std;

int main()
{

    long int a, count;
    cin >> a;
    count = a % 6;
    if (count == 0 || count == 1 || count == 3)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}