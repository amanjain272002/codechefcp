#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, a, b,cnt = 0 ;
        cin >> a >> b >> n;
        long int val = a ^ b;
        // cout<<val<<endl;
        int temp = val;
        while (temp>0)
        {
            cnt++;   // to calculate no. of set bits or no.of 1's
            temp = temp/2;
        }
        
        if (val == 0)
        {
            cout << "0" << endl;
        }
        else if (val < n)
        {
            cout << "1" << endl;
        }
        
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}