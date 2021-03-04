#include <iostream>
using namespace std;
#include<string>
class binary{
    private:
    string s;
    void check_bin(void);
    public:
    void read(void);
    void ones_compliment(void);
    void write(void);
};
void binary::read()
{
    cout<<"\nEnter a binary number:";
    cin>>s;
}
void binary::check_bin()
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0'&&s.at(i)!='1')
        {
            cout<<"Incorrect binary format:\n";
            exit(0);
        }
    }
}
void binary::ones_compliment()
{   
    check_bin();
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='1')
        s.at(i)='0';
        else
        s.at(i)='1';
    }
    
}
void binary::write()
{
    cout<<"\nDisplaying your binary number:";
    for(int i=0;i<s.length();i++)
    cout<<s.at(i);
    cout<<"\n";
}
int main() {
	binary b;
	b.read();
	b.write();
	b.ones_compliment();
    cout<<"after ones_compliment:\n";
	b.write();
	return 0;
}