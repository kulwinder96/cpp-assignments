#include <iostream>
#include <string>
using namespace std;
int main()
{
        string str = " ";
        cout << "enter string for check palandrome or not " << endl;
        getline(cin, str);
        string reverse_value;
        string::reverse_iterator singl = str.rbegin();
        while (singl != str.rend())
        {
                if (*singl >= 65 && *singl <= 90)
                {
                        *singl += 32;
                        reverse_value += *singl;
                }
                else
                {
                        reverse_value += *singl;
                }
                singl++;
        }
        cout << "string is reverse successfully " << endl;
        if (str == reverse_value)
        {
                cout << "string " << str << " is palandrome " << endl;
        }
        else
        {
                cout << "string " << str << " is not a palandrome " << endl;
        }
        return 0;
}