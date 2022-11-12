#include<iostream>
#include<string>
using namespace std;

int main(){
    long int t;
    cin>>t;
    while (t--)
    {
        long int n,d,h,water_level = 0;
        cin>>n>>d>>h;
        int A[n+1];
        string ans = "NO";
        for (int i = 1; i < n+1; i++)
        {
            cin>>A[i];
        }

        for (int i = 1; i < n+1; i++)
        {
            if (A[i]>0)
            {
                water_level += A[i];
            }
            else if (A[i]==0)
            {
                if (water_level>=d)
                {
                    water_level = water_level - d;
                }
                else
                {
                    water_level = 0;
                }
            }
            if (water_level>h)
            {
                ans = "YES";
                break;
            }
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}