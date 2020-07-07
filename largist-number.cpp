#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>v{2,4,44, 76,12,6,7,9,123, 456, 765,0};
int result=0;
for(unsigned int i=0; i<v.size(); i++)
{
for(unsigned int j=0; j<v.size(); j++)
{
if(v[i] > v[j]&& v[i] >result)
{
result = v[i];
}
}
}
cout<<"largist number is "<<result;

return 0;
}