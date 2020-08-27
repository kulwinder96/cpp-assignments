#include<iostream>
using namespace std;
class my_string{
char *letters;
public:
// create constructor;
my_string(char *letter, int size);
//operater overloding;
my_string operator=(my_string str);
};

my_string::my_string(char *letter, int size)
{
    letters=new char[size];
    for(int i=0; i< size; ++i)
    {
letters[i]=letter[i];
    }
}
/*
my_string my_string::operator=(my_string str)
{
    for(int i=0; str.letters[i]!='\0'; ++i)
    {
        letters[i]=str.letters[i];
    }
    return letters;
}
*/