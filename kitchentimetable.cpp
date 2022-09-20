#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int count = 0;
        int j;
        cin >> j;
        int *S = new int[j];
        S[0]= 0;
        int *H = new int[j];
        for (int i = 1; i <= j; i++)
        {
            int x;
            cin >> x;
            S[i] = x;
        }
        for (int i = 1; i <= j; i++)
        {
            int x;
            cin >> x;
            H[i] = x;
        }
        for (int i = 1; i <= j; i++)
        {
            if (H[i]<=S[i]-S[i-1])
                count++;
        }
        cout << count << "\n";
    }
    return 0;
}
