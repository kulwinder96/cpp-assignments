#include <iostream>
void swipe(int *first, int *second);
using namespace std;
int main()
{
    int number_of_element = 0;
    cout << "enter how many numbers you want to store in heap memory" << endl;
    cin >> number_of_element;
    int *elements = new int[number_of_element];
    //store values in dynamic array
    for (int i = 0; i < number_of_element; ++i)
    {
        cout << " enter element " << i + 1 << endl;
        cin >> elements[i];
        cout << endl;
    }

    cout << "values are stored in dynamic array \n lets go for sorting \n";
    // buble  sort
    //sort array down to up
    for (int i = 0; i < number_of_element; ++i)
    {
        bool status = false;
        for (int j = 0; j < number_of_element - 1; ++j)
        {
            if (elements[j + 1] < elements[j])
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
    cout << "lets go for find your number \n";
    int find_my_number{0};
    cout << "enter which number you want to find in dynamic array \n";
    cin >> find_my_number;
    int first_index = 0;
    while (number_of_element >= first_index)
    {
        int mid = (first_index + number_of_element) / 2;
        if (elements[mid] == find_my_number)
        {
            cout << " my number is " << find_my_number << " \n and it is on index " << mid << endl;
            break;
        }
        else if (elements[mid] < find_my_number)
        {
            first_index = mid + 1;
        }
        else
        {
            number_of_element = mid - 1;
        }
    }
    if (first_index > number_of_element)
    {
        cout << "number is not found \n";
    }
    delete elements;
    return 0;
}
void swipe(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}