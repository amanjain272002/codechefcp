#include<iostream>
#include<string>
using namespace std;

int main(){
    long int t;
    cin>>t;
    while (t--)
    {
        int d,c,sum1=0,sum2=0,c1= 0,c2 = 0;
        cin>>d>>c;
        int A[3],B[3];
        string ans = "NO";
        for (int i = 0; i < 3; i++)
        {
            cin>>A[i];
            sum1 = sum1 + A[i];
        }
        
        for (int i = 0; i < 3; i++)
        {
            cin>>B[i];
            sum2 = sum2 + B[i];
        }
        
        if (sum1>=150&&sum2>=150)
        {
            c1 = sum1+sum2+c;
            c2 = sum1+ sum2 + 2*d;
            if(c1<c2){
                ans = "YES";
            }
        }
        else if ((sum1>=150&&sum2<150)||(sum1<150&&sum2>=150))
        {
            c1 = sum1 + sum2 + c + d;
            c2 = sum1 + sum2 + 2*d;
            if (c1<c2)
            {
                ans = "YES";
            }
        }
        cout<<ans<<endl;
        
        
    }
    
    return 0;
}