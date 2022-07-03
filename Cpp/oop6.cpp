#include <iostream>
using namespace std;
    class abc{
    public:
    int a,b,c=3;
    public:
    void output();
    abc();
    ~abc();
    void display(int x,int y){
        a=x,b=y;
    }
    void display(){
        cout<<a<<"\n"<<b;
    }
};
 abc::abc(){
        cout<<"I am abc\n"<<this->c<<"\n";
    };
    void abc::output(){
        cout<<"Extra here "<<a<<" "<<b<<" "<<c<<endl;
    }
    abc::~abc(){
        cout<<"destructed"<<endl;
    }
int main() {
class cde:public abc{
    public:
    cde(){
        cout<<"i am cde \n";
        this->c=5;
        cout<<c<<"\n";
        cout<<this<<endl;
    }
};
 cde n;
 n.display(4,5);
 n.display();
 n.output();
	return 0;
}
