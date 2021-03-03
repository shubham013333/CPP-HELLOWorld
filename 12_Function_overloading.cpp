#include <iostream>
using namespace std;
int area(int l,int b);
float area(float r);
float area(float l,float b); 
int area(int l,int b)
{
    return l*b;
}
float area(float r)
{
    return 3.14*r*r;
}
float area(float a,float b)
{
    return 0.5*a*b;
}
int main() {
	cout<<"Area of rectangle:"<<area(3,6);
	cout<<"\nArea of Circle:"<<area(2.3);
	cout<<"\nArea of Triangle:"<<area(8.5f,9.6f);
	return 0;
}