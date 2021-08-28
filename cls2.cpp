/*Q.2 Create a class Team as follows with following data members such as,
Accept 5 different records in array and display the records as follows:
Country
Player
Matches
Age BattingAvg BallingAvg
Name
Name
India
Sachin
295
30
45.51
53.00
Australia
Ricky
160
28
41.00
67.00
India
Saurav
230
31
40.95
30.00 */




#include<iostream>
 using namespace std;
 
 class Team
 {
 
 	char country[10],player [10];
 	int matches,age;
 	double batavg,bowlavg;
 	public:
 	
 	
 	void getdata()
 	{
 	cout<<"enter the country name, plyer name,matches,age,batavg & bowlavg:";
 	cin>>country>>player>>matches>>age>>batavg>>bowlavg;
 	}
 	
 	
 	void showdata()
 	{
 	
 	cout<<"\n country name:\n"<<country;
 	cout <<"\n player name:\n"<< player;
 	cout<<"\n age:\n"<<age;
 	cout<<"\n matches:\n"<<matches;
 	cout<<"\n batavg :\n"<<batavg;
 	cout<<"\n bowlavg :\n"<<bowlavg;
 	cout<<"\n ";
 	
 	}
 	
 };
 
 
 int main()
 {
 int i;
 
 Team t[5];
 for(i = 0; i<5 ; i++)
 {
 
 t[i].getdata();
 
 }
 
 for(i = 0; i<5; i++)
 {
 
 t[i].showdata();
 }
 
 }
 	
 	
