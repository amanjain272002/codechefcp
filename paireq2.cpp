#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, cnt = 0;
        cin>>x;
        for (int j = 0; j < x; j++)
        {
            int a;
            cin >> a;
            v1.push_back(a);
        }
        vector<int>::iterator it;
        for (it = v1.begin(); it != v1.end(); it++)
        {
            int b;
            b = count(v1.begin(), v1.end(), *it);
            if (b > cnt)
                cnt = b;
        }
        cout << v1.size() - cnt << endl;
        v1.clear();
    }
    return 0;
}