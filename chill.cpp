#include <iostream>
using namespace std;
class Person
{
public:
void walk()
{
cout<<"the person is walking";
}
};
class Student : public Person
{
public:
void walk()
{
cout<<"the student is walking ";
}
};
int main()
{
Person *ptr;
Student s;
ptr = &s;
ptr-> walk();
return 0;
}
