#include<iostream>
using namespace std;
struct employ{
    int id =123 ;
    char name[50]="shubham";
    float sal=82358.3455;
    
}em;
union mobile{
    int model_no=123;
    char mob_name;
    float price;
};

int main()
{    union mobile m;
    cout<<"\n"<<em.id;
    cout<<"\n"<<em.name;
    cout<<"\n"<<em.sal;
      m.model_no=123;
    m.mob_name='s';
    m.price=20000.45;
    
      cout<<"\n"<<m.model_no;
    cout<<"\n"<<m.mob_name;
    cout<<"\n"<<m.price;
    
    return 0;
}