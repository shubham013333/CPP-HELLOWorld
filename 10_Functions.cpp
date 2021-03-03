#include <iostream>
using namespace std;

/*int sum(int a,int b)//call by value
{
    return a+b;
}
int sum(int *a,int *b)//call by pointer
{
    return *a+*b;
}*/
void sum(int &a,int &b)//call by reference
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main() {
    int x,y,z1,z2,z3;
    cin>>x>>y;
    //z1=sum(x,y);
  //  z2=sum(&x,&y);
    sum(x,y);
    cout<<"\n"<<"Sum is :"<<z1;
     cout<<"\n"<<"Sum is :"<<z2;
      cout<<"\n"<<"Sum is :"<<x<<":"<<y;
	
	return 0;
}