#include <iostream>
#include<math.h>
using namespace std;


// 1 way to solve the quetsion but time limit exceed 
// void solve()
// {
//     long int n;
//     cin >> n;

//     long int index_save = 0, val = 0, a1 = 0, a2 = 1, a3 = 0, arr[n + 1] = {0};
//     arr[2] = 1;
//     for (int i = 3; i <= n; i++)
//     {
//         arr[i] = (arr[i - 1] + arr[i - 2]) % 10;
//     }

//     for (int i = n; i >= 1; i--)
//     {
//         if ((i & (~(i - 1))) == i)
//         {
//             index_save = i;
//             break;
//         }
//     }

//     cout << arr[index_save] << endl;
// }

void solve(){
    long int n;
    cin>>n;
    long int z = log2((long double)n);
    if (z==0)
    {
        cout<<"0"<<endl;
    }
    else if (z==1)
    {
        cout<<"1"<<endl;
    }
    else
    {
        if (z%4==0)
        {
            cout<<"0"<<endl;
        }
        else if (z%4==2)
        {
            cout<<"2"<<endl;
        }
        else if (z%4==3)
        {
            cout<<"3"<<endl;
        }
        else
        {
            cout<<"9"<<endl;
        }
        
    }
    
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}