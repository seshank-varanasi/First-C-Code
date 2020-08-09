#include<iostream>
using namespace std;
void eligibility(int a);
main()
{
	int age;
	cout<<"Enter your age"<<endl;
	cin>>age;
	eligibility(age);
}
void eligibility(int a)
{
	if(a>=18)
	{
		cout<<"You're eligible to vote"<<endl;
	}
	else
	{
		cout<<"You are not eligible to vote \n";
	}
}
