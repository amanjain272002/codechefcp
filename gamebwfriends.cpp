#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        if (A >= B)
            B = B + C;
        else if (B > A)
            A = A + C;
        if (A >= B)
            B = B + D;
        else if (B > A)
            A = A + D;

        if (A >= B)
            cout << "N\n";
        else
            cout << "S\n";
    }

    return 0;
}
