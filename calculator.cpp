#include<iostream>
#include"calculator.h"
using namespace std;
int main()
{
    cout<<"calculator programm"<<endl;
    int xvalue{0}, yvalue{0};
    cout<<"enter first numaric value"<<endl;
    cin>>xvalue;
    cout<<endl;
    cout<<"enter second numaric value"<<endl;
    cin>>yvalue;
    char sym=' ';
    come:
    cout<<"enter + for addition - for substraction * for multipication / for division"<<endl;
    cin>>sym;
    switch(sym)
    {
        case '+':
        cout<<sum(xvalue, yvalue)<<endl;
        break;
        case '-':
        cout<<sub(xvalue, yvalue)<<endl;
        break;
        case '*':
cout<<multiply(xvalue, yvalue)<<endl;
break;
case '/':
cout<<division(xvalue, yvalue)<<endl;
break;
default:
cout<<"you entered invalid try again"<<endl;
goto come;
    }
    cout<<"completed"<<endl;
    cout<<"program is  exiting "<<endl;
    return 0;
}
/*
*in future i will update this programm
*it is just starting
*if you want to update
*than you can do
*/