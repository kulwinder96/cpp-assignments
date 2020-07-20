#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string nm, int ag)
    {
        name = nm;
        age = ag;
    }
};
int main()
{
    Person kulwinder("kulwinder singh", 24);
    cout << kulwinder.name;
    return 0;
}