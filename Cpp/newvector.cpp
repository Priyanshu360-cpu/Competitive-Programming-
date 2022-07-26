#include <iostream>
using namespace std;
template<class T> class newvect{
    public:
    T* a;
    int d=0;
    public:
    newvect(){
        a=(T*)malloc(sizeof(T));
    }
    newvect(int b,T c){
        a=(T*)malloc(b*sizeof(T));
        for(int i=0;i<b;i++){
            a[i]=c;
        }
    }
    void push_back(T c){
        d=d+1;
        a=(T*)realloc(a, sizeof(T)*d);
        a[d]=c;
    }
    void pop_back(){
        d=d-1;
        a=(T*)realloc(a, sizeof(T)*d);
    }
    void sort(){
        for(int i=1;i<d;i++){
        T k=a[i];
        int j=i-1;
        while (j >= 0 && a[j] > k) {
        a[j + 1] = a[j];
        j = j - 1;}
        a[j + 1] = k;}
    }
    int size(){
        return d+1;
    }
};
int main() {
    newvect<int> a;
    cout<<a.a[0];
    a.push_back(2);
    cout<<a.a[1];
    a.push_back(1);
    a.sort();
    cout<<endl;
    for(int i=0;i<a.size();i++)cout<<a.a[i];
    cout<<endl;
    a.pop_back();
     newvect<int> b(5,1);
     cout<<b.a[0];
	return 0;
}
