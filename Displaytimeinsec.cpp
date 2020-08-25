#include<iostream>
using namespace std;

class time
{
	private:
		int hh,mm,ss;
	public:
		entertime()
		{
			cout<<"Enter time in HH MM SS format";
			cin>>hh>>mm>>ss;
		}
		displaytime()
		{
			cout<<"\n The time is = "<<hh<<":"<<mm<<":"<<ss; 
		}
		displaytimeinsec()
		{
			int timeinsec;
			timeinsec=(hh*60*60)+mm*60+ss;
			cout<<"\n Time in seconds : "<<timeinsec;
		}
};

int main()
{
	time t1;
	t1.entertime();
	t1.displaytime();
	t1.displaytimeinsec();
}
