#include <iostream>
void swipe(int *pfirst, int *psecond);
using namespace std;
int main()
{
    int length = 0;
    cout << "enter how many values you want to stor \n";
    cin >> length;
    //create dynamic array and store value through for loop
    int *elements = new int[length];
    for (int i = 0; i < length; ++i)
    {
        cout << "enter value" << i + 1 << endl;
        cin >> elements[i];
        cout << endl;
    }
    //buble sort in desending order
    for (int i = 0; i < length - 1; ++i)
    {
        bool status = false;
        for (int j = 0; j < length - 1; ++j)
        {
            if (elements[j + 1] > elements[j])
            {
                swipe(&elements[j + 1], &elements[j]);
                status = true;
            }
        }
        if (status == false)
        {
            break;
        }
    }
    cout << "sorting is completed \n";
    // lets go for find number through binary search
    int find = 0;
    cout << "enter number which is you want to find in dynamic array \n";
    cin >> find;
    int first_index = 0;
    while (length >= first_index)
    {
        int mid = (first_index + length) / 2;
        if (elements[mid] == find)
        {
            cout << " you enterd " << find << " \n and it is on index" << mid << endl;
            break;
        }
        else if (elements[mid] < find)
        {
            length = mid - 1;
        }
        else
        {
            first_index = mid + 1;
        }
    }
    if (first_index > length)
    {
        cout << "number is not found \n";
    }
    delete elements;
    cout << "memory is free " << endl;
    return 0;
}
void swipe(int *pfirst, int *psecond)
{
    int temp = *pfirst;
    *pfirst = *psecond;
    *psecond = temp;
}