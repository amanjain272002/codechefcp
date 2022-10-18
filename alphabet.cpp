#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> s >> t;
    while (t--)
    {
        string w;
        int sum = 0;
        cin >> w;
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < w.length(); j++)
            {
                if (s[i]==w[j])
                {
                    w[j]=0;
                }
            }
        }
        for (int i = 0; i < w.length(); i++)
        {
            sum = sum + w[i];
        }
        if (sum==0)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
        
    }

    return 0;
}