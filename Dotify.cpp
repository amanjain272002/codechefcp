#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void doti_play()
{
    int n, k, l, flag = 0;
    cin >> n >> k >> l;
    vector<int> s;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (b == l)
        {
            s.push_back(a);
        }
    }
    sort(s.begin(), s.end());
    int sum = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (k > 0 and s[i] != 0)
        {
            flag = 1;
            sum += s[i];
            k--;
        }
        else
        {
            break;
        }
    }
    if (flag == 1)
    {
        cout << sum << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        doti_play();
    }

    return 0;
}