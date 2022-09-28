#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,sum1=100000,sum2 =100000;
    cin >> n;
    int c[1000], w[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (w[i] == 1)
        {
            
            for (int j = 0; j < n; j++)
            {
                if (w[j] == 2)
                sum1 = min(c[i]+c[j],sum1);
            }
        }
        else if (w[i]==3)
        {
            sum2 = min(c[i],sum2);
        }
        
        
    }
    cout<<min(sum1,sum2);
    return 0;
}