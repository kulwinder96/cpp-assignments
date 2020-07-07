#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>list;
int count=0, large=0, small=0, num=0;
char select=' ';
while(true)
{
cout<<"enter statement";
cout<<endl;
cout<<"A for add value P for print value S for print smallist value and l for largist value and q for quit the programm";
cout<<endl;
cin>>select;
switch(select)
{
case 'A':
case 'a':
cout<<"how mainy values you want to add";
cin>>count;
for(int i=0; i<count; i++)
{
cout<<"enter "<<i+1<<" value";
cout<<endl;
cin>>num;
cout<<endl;
list.push_back(num);
cout<<"value is added in list";
cout<<endl;
} 
break;
case 'P':
case 'p':
if(list.size() == 0)
{
cout<<"list is empty ";
} else {
for(auto value:list)
{
cout<<value;
cout<<endl;
}
}
break;
case 'S':
case 's':
if(list.size() == 0)
{
cout<<"list is empty thats why you can not find smallist value";
cout<<endl;
} else {
small=list[0];
for(auto value:list)
{

if(value <small)
{
small=value;
}
}
cout<<"smallist value is "<<small;
cout<<endl;
}
break;
case 'L':
case 'l':
if(list.size() == 0)
{
cout<<"list is empty thats why we can not find largist value";
cout<<endl;
} else {
large=list[0];
for(auto value:list)
{
if(value>large)
{
large=value;
}
}
cout<<"largist value is "<<large;
cout<<endl;
}
break;
case 'Q':
case 'q':
cout<<"exiting";
cout<<endl;
break;
default:
cout<<"input is incorrect try again";
}
if(select=='Q' || select =='q')
{
break;
}
}
return 0;
}