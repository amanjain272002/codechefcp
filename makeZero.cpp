#include <iostream>
#include <set>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int n;
            cin >> n;
            for (int i = 0; i < 30; i++)
            {
                int y = pow(2, i);
                if (y & n)
                {
                    // cout<<y << " and "<< n<<endl;
                    // cout<<i<<endl;
                    st.insert(i);
                }
            }
        }
        cout<<st.size()<<endl;
    }
    return 0;
}