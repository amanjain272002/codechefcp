#include <iostream>
#include <string>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        int b = 0, c = 0, d = 0, e = 0, f = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string a;
            cin>>a;
            if (a == "cakewalk")
            {
                b = 1;
            }
            else if (a == "simple")
            {
                c = 1;
            }
            else if (a == "easy")
            {
                d = 1;
            }
            else if ((a == "easy-medium") || (a == "medium"))
            {
                e = 1;
            }
            else if ((a == "medium-hard") || (a== "hard"))
            {
                f = 1;
            }
        }
        if (b+c+d+e+f==5)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}