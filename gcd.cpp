#include<iostream>
using namespace std;
int main()
{
	int a,b,gcd,i;
	
	
	cout<<"Enter 2 numbers";
	cin>>a>>b;
	for(i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0)
		{
			gcd=i;
		}
	}
	cout<<"GCD="<<gcd;
}

