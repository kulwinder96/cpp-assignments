#include<iostream>
using namespace std;
int main()
{
    int index{0};
    cout<<"how many values you want to store in array "<<endl;
    cin>>index;
    int *elements=new int[index];
    int sum{0};
    for(int i=0; i<index; ++i)
    {
        int value{0};
        cout<<"enter "<<i+1<<" value"<<endl;
        cin>>value;
        *(elements+i)=value;
        sum+=value;
    }
    cout<<"values are stord in array"<<endl;
    cout<<"values are "<<endl;
    for(int i=0; i<index; ++i)
    {
        cout<<*(elements+i)<<endl;
    }
    cout<<endl;
    float avg=(float)sum/(float)index;
    cout<<"average of array elements is "<<avg<<endl;
    return 0;
}