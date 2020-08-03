#include <iostream>
using namespace std;
int main()
{
    int num{0};
    come:
    cout << "enter any integer type value for check palandrom or not " << endl;
    cin >> num;
    if(num >100)
    {
    int reverse_value{0};
    int holder = num;
    while (num > 0)
    {
        int reminder = num % 10;
        reverse_value *= 10;
        reverse_value += reminder;
        num /= 10;
    }
    cout << "number is reverse successfully " << endl;
    if (holder == reverse_value)
    {
        cout << holder << " is a palandrome number" << endl;
    }
    else
    {
        cout << holder << "is not a palandrome number" << endl;
    }
    } else {
        cout<<"enter value above 100 "<<endl;
        goto come;
    }
    return 0;
}