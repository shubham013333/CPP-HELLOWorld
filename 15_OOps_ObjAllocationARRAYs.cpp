#include <iostream>
using namespace std;
class shop{
    private:
    int item_id[100];
    int item_price[100];
    int counter;
    public:
    void initcounter(void){counter=0;}
    void read();
    void display();
};
void shop::read()
{
    cout<<"Enter id of your Item no."<<counter+1;
    cin>>item_id[counter];
    cout<<"\nEnter price Rs/-of your item";
    cin>>item_price[counter];
    counter++;
}
void shop::display()
{    for(int i=0;i<counter;i++)
    cout<<"\nThe price of item with ID:"<<item_id[i]<<" is "<<item_price[i];
}
int main() {
    shop s;
    s.initcounter();
    s.read();
    s.read();
    s.read();
    s.display();
	return 0;
}
