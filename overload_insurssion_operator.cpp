#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    Person(string nm, int ag)
    {
        name = nm;
        age = ag;
    }
    friend ostream &operator<<(ostream &print, const Person &data)
    {
        print << "Name is " << data.name << " and age is " << data.age;
        return print;
    }
};
int main()
{
    Person kulwinder("kulwinder singh", 24);
    cout << kulwinder;
    return 0;
}