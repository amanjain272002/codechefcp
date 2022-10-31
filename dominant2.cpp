#include <iostream>
#include <map>
using namespace std;

void maps(map<int, int> &m)
{
    int mx = -1,flag = 0;
    for (auto &pr : m)
    {
        if (pr.second>mx)
        {
            mx = pr.second;
            
            flag = 1;
        }
        else if (mx == pr.second)
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<int, int> m;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x] = m[x] + 1;
        }
        maps(m);
    }

    return 0;
}