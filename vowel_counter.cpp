#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = " ";
    cout << "enter string to check how many vowel are available in string" << endl;
    getline(cin, str);
    int vcount{0}, wcount{0}, ccount{0}, ocount{0};
    for (int i = 0; str[i] != '\0'; ++i)
    {
        int j=0;    
while(str[i] == ' ')
{
if(j==0)
{
    wcount++;

}
j++;
}
        switch (str[i])
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            vcount++;
            break;
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '0':
            ocount++;
            break;
        default:
            ccount++;
        }
    }
    cout << "vowels are " << vcount << endl;
    cout << "words " << wcount + 1 << endl;
    cout << "numbers " << ocount << endl;
    cout << "other " << ocount << endl;
    return 0;
}