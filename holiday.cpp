#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int count = 8;
        int j;
        cin >> j;
        int a[j];
        for (int i = 0; i < j; i++)
        { 
            cin >> a[i];
        }
        for (int i = 0; i < j; i++)
        {
            if(a[i]<6&&a[i]<7)
            count++;
            else if (a[i]>7&&a[i]<13&&a[i]<14)
            count++;
            else if (a[i]>14&&a[i]<20&&a[i]<21)
            count++;
            else if (a[i]>21&&a[i]<27&&a[i]<28)
            count++;
            else if (a[i]>28&&a[i]<=30)
            count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}