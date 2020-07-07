#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>v{2,4,44, 76,12,6,7,9,123, 456, 765,0};
int result=v[0];
for(unsigned int i=0; i<v.size(); i++)
{
if(v[i] >result)
{
result=v[i];
}
}
cout<<"largist number is "<<result;

return 0;
}