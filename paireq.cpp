// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        int arr[x];
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+x);
        int count = 0;
        if (x % 2 != 0)
        {
            for (int i = 1; i < x; i++)
            {

                if (arr[i - 1] == arr[i])
                {
                    count = count + 0;
                }
                else
                {
                    count = count + 1;
                }
            }
            cout << count << "\n";
        }
        else
        {
            for (int i = 0; i < x; i++)
            {
                if (arr[i] != arr[x / 2])
                {
                    count = count + 1;
                }
            }
            cout << count << "\n";
        }
    }

    return 0;
}