#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long int n, score[2] = {0, 0};
        unordered_map<string, int> m;
        string s;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            m[s]++;
        }
        int j = 0;
        for (auto i : m)
        {
            score[j] = i.second;
            j++;
        }
        if (score[0] == score[1])
        {
            cout << "Draw" << endl;
        }

        else if (score[0] > score[1])
        {
            for (auto i : m)
            {
                if (i.second == score[0])
                    cout << i.first << endl;
            }
        }
        else
        {
            for (auto i : m)
            {
                if (i.second == score[1])
                    cout << i.first << endl;
            }
        }
    }

    return 0;
}