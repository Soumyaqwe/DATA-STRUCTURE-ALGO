#include<iostream>
using namespace std;
class student
{
    public:
    //statte OR properties
    int age;
    int roll;
    //behaviour
    void eat()
    {
        cout<<"eating"<<endl;
    }
    void sleep()
    {
        cout<<"sleepiing"<<endl;
    }
};
int main()
{
    student s;
    s.age=12;
    s.roll=3;
    cout<<"age is "<<s.age<<endl;
    cout<<"roll no is "<<s.roll<<endl;
    s.eat();
    s.sleep();

}