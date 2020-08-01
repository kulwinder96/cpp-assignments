#include <iostream>
using namespace std;
int main()
{
//create array;
//init values in array through loop;
    int elements = 0;
    cout << "how many values you want to store";
    cout << endl;
    cin >> elements;
    int *arr = new int[elements];
    for (int i = 0; i < elements; ++i)
    {
        int value = 0;
        cout << "enter value" << i + 1 << endl;
        cin >> value;
        *(arr + i) = value;
    }
    cout << "values are stored successfully" << endl;
    //take input from user for searching;
    int first=0;
    int last=elements;
    int mid=0;
    int search=0;
    cout<<"enter number which is you want to search"<<endl;
    cin>>search;
    //loop for binary search;
    while(first<=last)
    {
mid=(first+last)/2;
if(*(arr+mid)==search)
{
    cout<<"value is found on "<<mid<<endl;
    break;
} else if(*(arr+mid)<search)
{
first =mid+1;
} else {
    last =mid-1;
}
    }
if(first>last)
{
    cout<<"number is not available in array"<<endl;
}
    
    return 0;
}