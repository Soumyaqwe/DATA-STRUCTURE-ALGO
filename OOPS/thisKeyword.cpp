#include<iostream>
using  namespace std;
class student
{
   private:
   int weight;
   public:
   int age;
   int roll;
   void sleep()
   {
    cout<<"sleeping"<<endl;
   }
   int getweight()
   {
    return weight;
   }
   void setweight(int weight)
   {
    this->weight=weight;
   }
};
int main()
{
    student s;
    s.setweight(70);
    cout<<s.getweight();

}