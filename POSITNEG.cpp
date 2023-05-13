#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

void POSI_TNEG(){
    int n,value,tneg=0,tpos=0,fvalue = 0;
    cin>>n;
    vector<int> b,c;
    for (int i = 0; i < n; i++)
    {
        cin>>value;
        b.push_back(value);
        c.push_back(pow(2,i)*b[i]);
    }
    
    sort(c.begin(),c.end());
    for (int i = 0; i < n; i++)
    {
        if (c[i] < 0)
        {
            tneg +=1;
        }
        else
        {
            tpos+=1;
        }
    }
    int tn = n*(n+1)/2 + 1;
    int tp = 0;
    int i = 0,j=n-1;
    while (i<j)
    {
        if ((c[i]<0) and (c[i] + c[j] > 0))
        {
            tp+=tneg;
            j--;
        }
        else
        {
            i++;
            tneg--;
        }
    }
    tpos = tpos*(tpos+1)/2 + 1 + tp;


    
    
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        POSI_TNEG();
    }
    
    return 0;
}