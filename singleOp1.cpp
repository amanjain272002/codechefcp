#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        double xnew = 0, old = 0;
        cin >> n;
        string s;
        cin >> s;
        // cin>>old>>xnew;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                s[i] = '1';
                xnew = xnew + 1;
                old = old + 0;
            }
            else
            {
                xnew = xnew + 1;
                old = old + 1;
            }
        }
        if (old == xnew)
        {
        }
        else
        {
            xnew = xnew - old;
            
        }
        
        
    }

    return 0;
}