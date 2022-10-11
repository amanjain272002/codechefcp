#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, c = 0,  j;
        long int sum = 0;
        cin >> n;
        for (j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            if (a == 2)
                break;
            if (a == 5)
                c++;
            sum = sum + a;
        }
        int avg = sum/n;
        cout<<avg<<endl;
        if ((avg >= 4.0) && (c > 0) && (j == n))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}