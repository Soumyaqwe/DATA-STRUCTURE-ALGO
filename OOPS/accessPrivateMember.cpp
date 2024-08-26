#include<iostream>
using namespace std;
class student
{
    private:
    int weight;
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
    //getter & setter
    int getweight()
    {
        return weight;
    }
    void setweight(int w)
    {
        weight=w;
    }
};
int main()
{
    //static object
    student s;
    
    s.age=12;
    s.roll=3;
    cout<<"age is "<<s.age<<endl;
    cout<<"roll no is "<<s.roll<<endl;
    s.eat();
    s.sleep();
    s.setweight(70);
    cout<<"weight is "<<s.getweight()<<endl;

}