#include<iostream>
using namespace std;
int main()
{
    int first{0}, second{0};
    cout<<"enter first value to find gcd "<<endl;
    cin>>first;
    cout<<"enter second value "<<endl;
    cin>>second;
    int holder1=first, holder2=second;
    while(first !=second)
    {
        if(first > second)
        {
            first-=second;
        }
        else {
            second-=first;
        }
    }
    cout <<"gcd value is "<<second;
    return 0;
}