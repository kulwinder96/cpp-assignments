#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>v{-1, -234, -867,2,4,44, 76,12,6,7,9,123, 456, 765,0};
int large=0,small=0;
int index=v[0];
for(unsigned int i=0; i<v.size(); i++)
{
if(v[i]>large)
{
large=v[i];
}
if(v[i] <small)
{
small=v[i];
}
}
cout<<"largist number is "<<large;
cout<<endl;
cout<<"smallist number is "<<small;
return 0;
}