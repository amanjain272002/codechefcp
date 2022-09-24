#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int l;
        vector<char> v1;
        cin >> l;
        for (int i = 0; i < l; i++)
        {
            char s;
            cin >> s;
            v1.push_back(s);
        }
        if (l < 4)
            cout << "YES" << endl;
        else if (l == 4)
        {
            int count = 0;
            vector<char>::iterator it;
            for (it = v1.begin(); it != v1.end(); it++)
            {
                // cout<<*it;
                if ((*it != 'a') && (*it != 'e') && (*it != 'i') && (*it != 'o') && (*it != 'u'))
                    count++;
                // cout<<count;
            }
            if (count == 4)
                cout << "NO" << endl;

            else
                cout << "YES" << endl;
        }
        else if (l > 4)
        {
            int count = 0, op = 0;
            vector<char>::iterator it;
            for (it = v1.begin(); it != v1.end(); it++)
            {
                if ((*it != 'a') && (*it != 'e') && (*it != 'i') && (*it != 'o') && (*it != 'u'))
                    count++;

                else
                    count = 0;
                if (count >= 4)
                {
                    op = 1;
                }
            }
            if (op == 1)
            {
                cout << "NO" << endl;
            }
            else
                cout << "YES" << endl;
        }
    }

    return 0;
}