#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, cnt = 0, bnt = 0;
        vector<string> v1;
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            string c;
            cin >> c;
            v1.push_back(c);
        }
        vector<string>::iterator it;
        for (it = v1.begin(); it != v1.end(); it++)
        {
            if (*it == "START38")
                cnt++;
            else
                bnt++;
        }
        cout << cnt << " " << bnt << endl;
        v1.clear();
    }

    return 0;
}