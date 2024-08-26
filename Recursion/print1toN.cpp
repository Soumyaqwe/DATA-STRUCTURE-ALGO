#include<iostream>
using namespace std;
void print(int n)
{
   //base case
   if(n==0)
   {
    return;
   }
   print(n-1);
   cout<<n<<" ";
}
int main()
{
    int n=10;
    print(n);

}