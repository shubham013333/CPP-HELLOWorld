#include<iostream>
using namespace std;
int main()
{
    //POINTERS
    int x=1999;
    int *y=&x;
    int **z=&y;
    cout<<"\n"<<"x:"<<x;
    cout<<"\n"<<"*y:"<<*y;
    cout<<"\n"<<"&x:"<<&x;
    cout<<"\n"<<"**z:"<<**z;
    return 0;
    
}