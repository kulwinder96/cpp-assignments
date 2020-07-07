#include<iostream>
#include<vector>
using namespace std;
int main()
{
//create vector;
vector<int>list;
//create char type variable;
char letter=' ';
//create int type variable;
int large=0, small=0;
unsigned int count=0;
//loop is starting 
while(true)
{
cout<<"enter statement";
cout<<endl;
cout<<"like A for add value, P for print added value, L for find largist value, S for find smallist value and Q for quit the programm";
cout<<endl;
cin>>letter;
//switch for check conditions;
switch(letter)
{
case 'A':
case 'a':
cout<<"How mainy values you want to add ?";
cout<<endl;

cin>>count;
//for loop for add values in vector;
for(unsigned int i=0; i<count; i++)
{
cout<<"enter "<<i+1<<" value";
cout<<endl;
unsigned int num=0;
cin>>num;
list.push_back(num);
}
break;
case 'P':
case 'p':
//for range of loop for print values;
for(auto value:list)
{
cout<<value;
cout<<endl;
}
break;
case 'L':
case 'l':
//for loop for  find largist value;
for(unsigned int i=0; i<list.size(); i++)
{
for(unsigned int j=0; j<list.size(); j++)
{
if(list[i]>list[j]&&list[i]>large)
{
large=list[i];
}
}
}
cout<<"largist value is "<<large;
cout<<endl;
break;
case 'S':
case 's':
//for loop for find smallist value;
for(unsigned int i=0; i<list.size(); i++)
{
for(unsigned int j=0; j<list.size(); j++)
{
if(list[i]<list[j])
{
if(list[i]<small)
{

small=list[i];
} else {
small=list[i];
continue;
}
}}
}
cout<<"smallist value is "<<small;
cout<<endl;
break;
case 'Q':
case 'q':
cout<<"thanks to use this program going to exit";
cout<<endl;
break;
default:
cout<<"invalid input please try again";
}
if(letter =='Q' || letter =='q')
{
break;
}
}
return 0;
}