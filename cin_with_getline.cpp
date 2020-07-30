#include <iostream>
#include <string>
using namespace std;
int main()
{
    string username;
    cout << "may i know your name?";
    getline(cin, username);
    cout << "Hi " << username;
    cout << endl;
    return 0;
}