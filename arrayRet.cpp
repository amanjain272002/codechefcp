#include <iostream>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        long int b[n], x,sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            sum = sum + b[i];
        }
        x = sum / (n + 1);
        for (int i = 0; i < n; i++)
        {
            cout <<  b[i] - x << " ";
        }
        
        cout << endl;
    }
    return 0;
}