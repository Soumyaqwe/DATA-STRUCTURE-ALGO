#include<iostream>
using namespace std;
void  printeverydigit(int n)
{
    //base case
    if(n==0)
    {
        return;
    }
   int num=n/10;
    printeverydigit(num);
    int digit=n%10;
    cout<<digit<<" ";
}
int main()
{
    int n=932;
    printeverydigit(n);
}