#include <iostream>
using namespace std;
class employee{
    private:
    int a,b;
    public:
    void getdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata(){
        cout<<"a:"<<a;
        cout<<"\n"<<"b:"<<b;    }
};

int main() {
	employee e;
	e.getdata(2,4);
	e.showdata();
	return 0;
}