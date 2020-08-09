#include<iostream>
 using namespace std;
 
 int main()
 {
 	int a[5];
 	int n=5;
 	cout<<"Enter the Array Data"<<endl;
 	for(int i= 0;i<=4;i++)
 	{
 	 	cin>>a[i];	
	}
	cout<<"Data Entry Completed"<<endl;
	cout<<"You entered"<<endl;
	for(int i=0;i<=4;i++)
	{
		cout<<a[i]<<endl;;
	}
}
