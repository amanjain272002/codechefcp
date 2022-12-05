#include <iostream>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long int n, oddcount = 0, evencount = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 2 == 0)
            {
                evencount++;
            }
            else
            {
                oddcount++;
            }
        }
        if (oddcount == 0)
        {
            cout<<"NO"<<endl;
        }

        else if (oddcount % 2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }

    return 0;
}