#include <iostream>
#include <string>
using namespace std;

void maxOneCount()
{
    int n;
    cin >> n;
    string s, x = "";
    cin >> s;
    int cnt = 0;
    if (s[n - 1] == '0' )
    {
        x[n - 1] = '1';
        cnt++;
    }
    else if (s[n - 1] == '1')
    {
        x[n - 1] = '0';
    }
    
    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            if (x[i + 1] == '1')
            {
                x[i] = '1';
                cnt++;
            }
            else 
            {
                x[i] = '0';
            }
        }
        else
        {
            if (x[i + 1] == '1')
            {
                x[i] = '0';
            }
            else
            {
                x[i] = '1';
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        maxOneCount();
    }
}