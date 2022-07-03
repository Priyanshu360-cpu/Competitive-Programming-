#include <iostream>
using namespace std;
class abc{
    private:
    int a,b;
    public:
    void display(int x,int y){
        a=x,b=y;
    }
    void display(){
        cout<<a<<"\n"<<b;
    }
};
int main() {
 abc n;
 n.display(4,5);
 n.display();
	return 0;
}
