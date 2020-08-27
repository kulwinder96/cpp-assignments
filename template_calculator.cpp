#include<iostream>
//#include"calculator_template.h"
#include"cal.h"
using namespace std;
template<class cal>
/*
template<class calculate>
calculate sum(calculate num1, calculate num2)
{
    return num1+num2;
}
*/
int main()
{
    cout<<"result is "<<endl;
    cout<<endl;
    cout<<sum(78.8, 65.1)<<endl;
    return 0;
}