#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = " ";
up:
    cout << "enter string to change case " << endl;
    getline(cin, str);
    string::iterator steps = str.begin();
    size_t lower = 0, upper = 0;
    for (steps; steps != str.end(); ++steps)
    {
        if (*steps >= 65 && *steps <= 90)
        {
            upper++;
        }
        else if (*steps >= 97 && *steps <= 122)
        {
            lower++;
        }
        else if (*steps == ' ')
        {
            *steps = ' ';
        }
        else
        {
            cout << " a-z, A-Z try again " << endl;
            goto up;
        }
    }
    if(lower == str.length())
    {
        while(steps!=str.end())
        {
        if(*steps >= 97 && *steps <=122)    
        {
                *steps -=32;
            }
        }
        cout<<"you enterd all leter in lower case "<<endl;
        cout<<" after changing in uppercase "<<str<<endl;
    } else if(upper == str.length())
    {
        while(steps !=str.end())
        {
            if(*steps >=65 && *steps <=90)
            {
                *steps +=32;
            }
        }
        cout<<"you entered all letters in uppercase "<<endl;
        cout<<"after convert "<<str<<endl;
    }else if( lower > upper)
    {
        while(steps !=str.end())
        {
            if(*steps >=97 && *steps <=122)
            {
                *steps -=32;
            }}
        
        cout<<"maximum character are in lower case thats whi string is converted in upper case "<<endl;
cout<<"after converting string is "<<str<<endl;
    } else {
        while(steps !=str.end())
        {
            if(*steps >=65 && *steps <=90)
            {
                *steps +=32;
            }
        }
        cout<<"maximum characters are in a upper case thats whi string is converted in lower case "<<endl;
        cout<<"after converting string is "<<str<<endl;
    }
    return 0;
}