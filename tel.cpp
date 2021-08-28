/*Write a program to implement a telephone bill class with Name, Address,
Tel. No., No. of calls as data members. Compute the amount to be paid if the
charges per call is Rs. 2/-.*/

#include<iostream>

using namespace std;

class tel_bill
{	

	char name[10],address[10];
	int tel_no;
	int no_of_call;
	int charges;
	public:
	
	void get()
	{
		
		 cout<<"\n enter name:";
		 cin>>name;
		 cout<<"\n enter address:";
		 cin>>address;
		 cout<<"\n tel no:";
		 cin>>tel_no;
		 cout<<"\n enter no of call:";
		 cin>>no_of_call;
		 
		 charges = (no_of_call *2);
	}
	
		 
	void show()
	{
		
		cout<<"\n the amount paid is:"<<charges;
	}
	
};


int main()
{

	tel_bill t;
	
	t.get();
	t.show();
}
