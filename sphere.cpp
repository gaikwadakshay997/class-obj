/* Q.4 Write a Program to implement a sphere class with appropriate members
and
member function to find the surface area and the volume.
(Surface = 4 π r2 and Volume = 4/ 3 π r3) */

#include<iostream>

using namespace std;

class sphere
{

	int sa,sv,r,rr,rrr;
	public:
	
	void get()
	{
		cout <<"enter radius:";
		cin>>r;
		
		rr = r*r;
		rrr = r*r*r;
		sa = 4*3.14*rr;
		sv = 4/3*3.14 *rrr;
		
	}
	 
	 void show()
	 {
	 
	 	cout<<"\n the surface area is:";
	 	cout<<sa;
	 	
	 	cout<<"\n the surface volume is:";
	 	cout<<sv;
	 	
	 }
	 
	 
};

int main()
{

	sphere s;
	s.get();
	s.show();
	
}

