#include <iostream>
using namespace std;
template<class T> T mmax(T a,T b){
    return a>b?a:b;
}
template<class T> class newvect{
    public:
    T* a;
    public:
    newvect(int b){
        a=(int*)malloc(b*sizeof(int));
    }
    newvect(int b,T c){
        a=(int*)malloc(b*sizeof(int));
        for(int i=0;i<b;i++){
            a[i]=c;
        }
    }
};
int main() {
    newvect<int> a(5);
    cout<<sizeof(a.a[0]);
     newvect<int> b(5,1);
     cout<<b.a[0];
	cout<<mmax<int>(2,3);
	return 0;
}
