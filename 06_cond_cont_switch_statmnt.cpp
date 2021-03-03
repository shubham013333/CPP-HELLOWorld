#include <iostream>
using namespace std;

int main() {
//CONDITIONAL STATEMENT:
//IF| ELSE | ELSE-IF |NESTED IF &ELSE-IF
    int age = 18;
    if(age<=18)
    cout<<"Your are Eligible to Voting:";
    else
    cout<<"your are not *Eligible:";
    
//LOOPS: FOR| WHILE | DO-WHILE
//FOR LOOP
    int f=1,n,i;
    cin>>n;
   // for( i=1;i<=n;i++)
   // f=f*i;
    //cout<<"\n"<<"By for Loop:"<<f;

//WHILE LOOP
   // i=1;
  //  while(i<=n)
  // { f=f*i;
   // i++;
  // }
  //cout<<"\n"<<"By while Loop:"<<f;
//DO-WHILE LOOP
    i=1;
    do{
        f=f*i;
        i++;
    }while(i<=n);
   cout<<"\n"<<"By DO-WHILE Loop:"<<f;
   
//SWITCH STATEMENT
switch (age)
    {
    case 18: 
        cout<<"\n"<<"You are 18"<<endl;
        break;
    case 22: 
        cout<<"You are 22"<<endl;
        break;
    case 2: 
        cout<<"You are 2"<<endl;
        break;

    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Done with switch case";
   
  return 0;
  
}