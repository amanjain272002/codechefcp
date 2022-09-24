#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int N;
        cin >> N;
        if (N>=21)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}