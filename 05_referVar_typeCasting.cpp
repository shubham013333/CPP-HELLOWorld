#include <iostream>
using namespace std;

int main() {
//float,double & long double;
  /* float type_float=3.14777f;
   double type_doble=3.14;
   long double type_long_double=3.14;
   cout<<type_float;
   cout<<"\n"<<type_doble;
   cout<<"\n"<<type_long_double;*/
//REFERENCE VARIABLE

   int x=345;
   int &y=x;
   cout<<x;
   cout<<"\n"<<y;
   
//TYPE CASTING
    int a = 314;
    float b = 3.14;
    cout<<"value of a is"<<(float)a<<endl;
    cout<<"value of a is"<<float(a)<<endl;
    
     cout<<"value of b is"<<(int)b<<endl;
     cout<<"value of b is"<<int(b)<<endl;
     
     int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;
  return 0;
}