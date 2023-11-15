#include <iostream>
using namespace std;

int main()
{
    int r1, r2, d1, d2;
    cin >> r1 >> r2 >> d1 >> d2;
    if (d1 + r1 > d2 + r2)
    {
        cout << "Dominater" << endl;
    }
    else
    {
        cout << "Everule" << endl;
    }
    return 0;
}
