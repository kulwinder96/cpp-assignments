#include<iostream>
using namespace std;
int main()
{
int reminder{0};
int num{0};
int holder{0};
int revirce{0};
cout<<"enter any numaric value to print in word";
cout<<endl;
cin>>num;
holder=num;
//loop for revirce number;
while(num>0)
{
reminder=num%10;
revirce *=10;
revirce +=reminder;
num/=10;
}
//loop for reverce to reverce;
while(revirce > 0)
{
    reminder=revirce%10;
    //switch statement to print digit as a word;
    switch(reminder)
    {
case 1:
cout<<"one ";
break;
case 2:
cout<<"two ";
break;
case 3:
cout<<"three ";
break;
case 4:
cout<<"four ";
break;
case 5:
cout<<"five ";
break;
case 6:
cout<<"six ";
break;
case 7:
cout<<"seven ";
break;
case 8:
cout<<"eight ";
break;
case 9:
cout<<"nine ";
break;
case 0:
cout<<"zero ";
break;
default:
cout<<"invalid number";
    }
    revirce/=10;
}
    return 0;
}