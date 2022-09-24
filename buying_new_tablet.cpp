#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int max=1,x=0;
        int n, b;
        cin >> n >> b;
        for (int i = 0; i < n; i++)
        {
            int w, h, p;
            cin >> w >> h >> p;
            if (b >= p)
            {
                if (max <= w * h)
                {
                    max = w * h;
                    x = 1;
                }
            }
        }
        if (x == 1)
        {
            cout << max << endl;
        }
        else
        {
            cout << "no tablet" << endl;
        }
    }

    return 0;
}