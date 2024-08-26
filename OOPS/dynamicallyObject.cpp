#include<iostream>
using namespace std;
class student
{
    public:
    int age;
    int weight;
    void sleep()
    {
        cout<<"sleeping"<<endl;
    }
};
int main()
{
    //dynamically object
    student* s=new student;
    s->age=2;
    s->weight=12;
    cout<<s->age<<endl;
    s->sleep();

}