#include <iostream>
#include <conio.h>
 
using namespace std;

int main()
{
	
	double phr;

cout<<"Pay Rate per Hour(15.50$)"<<endl;
cout<<"Number of hours per week"<<endl;
cin>>phr;
cout<<"Total Income per week:"<<phr*15.50<<endl;

cout<< "\nIn 5 Weeks"<<endl;

cout<<"\nTotal Income :"<<phr*15.50*5<<endl;

cout<<"\n\nNet Income After Paying Taxes(14%):" <<phr*15.50*5 -(phr*15.50*5*.14)<<endl;

cout<<"\n\nYou spend on New clothes and accessories(10%):" <<phr*15.50*5 -(phr*15.50*5*.14) - (phr*15.50*5*.10)<<endl;

cout<< "\n\nSpend on School Supplies(1%):" <<phr*15.50*5 -(phr*15.50*5*.14) - (phr*15.50*5*.10) -(phr*15.50*5*.01)<<endl;

cout<<"\n\n Spend to buy saving bonds (25%):"<<phr*15.50*5 -(phr*15.50*5*.14) - (phr*15.50*5*.10) -(phr*15.50*5*.01)-(phr*15.50*5*.25)<<endl;












	_getch();
	return 0;


}
