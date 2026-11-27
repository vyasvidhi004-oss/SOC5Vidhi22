#include<iostream>
using namespace std;
class Calculator
{
private:
int num;
public:
float add (float x , float y)
{
return x+y;
}
float add(float x,float y,float z)
{
return x+y+z;
}

};
int main()
{
Calculator cal;
cout<<"the addition1 is :" <<cal.add(3,4);
cout<<"the additin2 is : "<<cal.add(8,9);
return 0;
} 
