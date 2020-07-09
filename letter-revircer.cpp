#include<iostream>
#include<string>
using namespace std;
int main()
{
string str, letters;
cout<<"enter any string"<<endl;
getline(cin, str);
for(size_t i=0; i<str.length(); i++)
{
for(size_t j=0; j<=i; j++)
{
cout<<str[j];
letters+=str[j];
}
cout<<endl;
for(size_t k=i; k>0; k--)
{

cout<<letters[k];
}
cout<<endl;

}
return 0;
}