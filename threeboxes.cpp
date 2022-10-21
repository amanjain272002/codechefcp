#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a[4],count = 1,temp;
        for (int i = 0; i < 4; i++)
        {
            cin>>a[i];
        }
        temp = a[3];
        for (int i = 0; i < 3; i++)
        {
            if (a[i]<=a[3])
            {
                a[3] = a[3] - a[i];
            }
            else{
                count ++;
                a[3] = temp;
                a[3] = a[3] - a[i];
            }
        }
        cout<<count<<endl;
    }
    

    return 0;
}