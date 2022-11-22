#include<iostream>
#include<map>
using namespace std;

int main(){
	long int n,a;
	cin>>n;
	map<int,int>m;
	for (int i = 0; i < n; i++)
	{
		cin>>a;
		m[a]++;
	}
	
	for (int i = 1; i < n+1; i++)
	{
		if (m.find(i)==m.end())
		{
			cout<<i<<" ";
		}
	}	
	return 0;
}