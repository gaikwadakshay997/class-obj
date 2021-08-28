/* Q.3 An electricity board charges the following rates to domestic users to
discourage large consumption of energy:
For the first 30 units - 1.50/- per unit
For next 200 units
- 3.00/- per unit
Beyond 300 units
- 4.25/- per unit
Create a class ElectricityBill for atleast 5 users with following opeartions….
Write a program to read the name of the user and number of units consumed
and print out the charges with names.
If the total amount is more than Rs. 500.00 then an additional surcharge of 15%
is added. */


#include<iostream>

using namespace std;

class Elect_bill
{
	char name[10];
	int unit;
	double charge;
	double amnt;
	
	public:
	
	void getdata()
	{
	
		cout<<"\n enter name & unit:";
		
		cin>>name>>unit;
		
		if(unit<=30)
		{
			amnt = (unit*1.50);	
		}
		
		if(unit>=30 && unit<=200)
		{
			amnt = (unit *3);
		}
		
		if(unit >=300)
		{
			amnt = (unit *4.25);
		}
		
		if(amnt >500)
		{
			charge = amnt + (amnt*0.15);
		}
		
		if(amnt<500)
		{
			charge = amnt;
		}
		
		
	}
	
	
	void showdata()
	{
	 	cout<<"\n name: "<<name;
	 	cout<<"\n unit:"<<unit;
	 	cout<<"\n charges:"<<charge;
	 	
	 }
	 
};

int main()
{


Elect_bill e[2];

for(int i=0; i<2; i++)
{

e[i].getdata();
	
}

for(int i=0; i<2; i++)
{

e[i].showdata();
}
}
	
