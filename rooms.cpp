#include<iostream>
using namespace std;
int main()
{
int number_of_room=0;
cout<<"enter how mainy rooms you cleaned";
cin>>number_of_room;
float prise=35.00;
cout<<" prise of per roomcleaining";
cout<<prise;
cout<<" total rooms"<<number_of_room;
cout<<"totle coust with out tex is "<<prise*number_of_room;
cout<<" tex is "<<6<<"%";
cout<<"total cost with tex is "<<prise*number_of_room+prise*number_of_room/6;
return 0;
}