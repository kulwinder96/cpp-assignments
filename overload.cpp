#include <iostream>
using namespace std;
class Next
{
private:
    int x, y;

public:
    Next(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }
    void print_data()
    {
        cout << x << " " << y << endl;
    }
    Next operator/(Next const &first)
    {
        Next one;
        one.x = x / first.x;
        one.y = y / first.y;
        return one;
    }
    Next operator--(int j)
    {
        Next second;
        second.x = x;
        second.x--;
        second.y = y;
        second.y--;
        return second;
    }
};
int main()
{
    Next o1(4, 6);
    Next o2(25, 39);
    Next o3 = o2 / o1;
    o3.print_data();
    Next o4 = o2--;
    o4.print_data();
    return 0;
}