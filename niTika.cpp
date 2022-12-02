#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str;
        getline(cin, str);
        string s = "";
        int key = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == ' ')
            {
                s = s + (char)toupper(str[key]) + ". ";
                key = i + 1;
            }
        }
        for (int i = key; i < str.size(); i++)
        {
            if (i == key)
                s = s + (char)toupper(str[i]);
            else
                s = s + (char)tolower(str[i]);
        }
        cout << s << endl;
    }
    return 0;
}