#include<iostream>

using namespace std;

int checkforprime(int);

int main()
{
	int num;
	cout<<"Enter a number "<<endl;
	cin>>num;
	for(int i=0;i<=num/2;++i)
	{
		if(checkforprime(i))
		{
			if(checkforprime(num-i))
			{
				cout<<num<<" = "<<i<<" + "<<num-i<<endl;
			}
		}
	}
}

int checkforprime(int x)
{
	int z;
	int temp=1;
	for(z=2;z<=x/2;z++)
	{
		if(x%z==0)
		{
			temp=0;
			break;
		}
	}
	return temp;
}
