// #include <bits/stdc++.h>
#include <iostream>
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
        for (int i = 0; i < x; ++i)
        {

            for (int j = i + 1; j < x; ++j)
            {

                if (arr[i] > arr[j])
                {

                    int a = arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }
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