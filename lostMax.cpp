#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream x(s);
        vector<int> v;
        int p;
        while (x >> p)
        {
            v.push_back(p);
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == v.size() - 1)
            {
                v[i] = 0;
                break;
            }
        }
        sort(v.begin(), v.end());
        cout << v[v.size() - 1] << endl;
    }
    return 0;
}