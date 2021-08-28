/*Q.1 Create the following classes and write their appropriate class members and
display proper information to user.
a) Time b) Date c) Person d) Student
e) Fan f) Point
g)Box */


#include<iostream>
using namespace std;


class Time
{

	int hr,min,sec;
	public:



	void getinfo()
	{
		cout<<"\n enter the hr,min &sec";
		cin>>hr>>min>>sec;

	}

	void show()
	{

		cout<<"\n hr: "<<hr<<" min: "<<min<<" sec: "<<sec;
		cout<<"\n ";
	}
};


class Date
{
	int mm,dd,yy;
	public:
	
	void getinfo()
	{
		cout<<"\n enter the mm,dd,&yy";
		cin>>mm>>dd>>yy;
	}
	
	
	void show()
	{
		cout<<"\n mm: "<<mm<<" dd: "<<dd<<" yy: "<<yy;
		cout<<"\n";
	}
};


class Person
{
	char name[10];
	char address[10]; 
	public:
	
	void getinfo()
	{
	
	cout<<"\n enter the name & address:";
	cin>>name>>address;
	
	}
	
	
	void show()
	{
		cout<<"\n name: "<<name<<" address: "<<address;
		cout<<"\n";
	}

};


class Student
{

	char name[10];
	
	char address[10];
	public:
	
	void getinfo()
	{
		cout<<"\n enter the name & address";
		cin>>name>>address;
		
	}
	
	void show()
	{
	
		cout<<"\n name: "<<name<<" address: "<<address;
		cout<<"\n";	
	}
};
	
class Fan
{
	char company[10];
	double price;
	public:
	
	void getinfo()
	{
		cout<<"\n enter the company & price:";
		cin>>company>>price;
		
	}
	
	void show()
	{
	
		cout<<"\n company: "<<company<<" price: "<<price;
		cout<<"\n";
	}
};

class Point
{

	int x,y;
	public:
	
	void getinfo()
	{
		cout<<"\n enter the x & y:";
		cin>>x>>y;
		
	}
	
	void show()
	{
		cout<<"\n x: "<<x<<" y: "<<y;
	}
};		
	

int main()
{

Time t1;
t1.getinfo();
t1.show();

Date d1;
d1.getinfo();
d1.show();

Person p1;
p1.getinfo();
p1.show();


Student s1;
s1.getinfo();
s1.show();

Fan f1;
f1.getinfo();
f1.show();


Point pt1;

pt1.getinfo();
pt1.show();
}








