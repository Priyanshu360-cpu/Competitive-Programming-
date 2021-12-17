#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x,y;
    cin>>x>>y;
    vector<int> a[x];
    for(int i=0;i<x;i++){ 
       int s;
       cin>>s; 
       cin.ignore();
       vector<int> g1; 
       for(int j = s;j>0;j--){
           int p;
           cin>>p;
           cin.ignore();
           g1.push_back(p);
       }
       a[i]=g1;
    }
    for(int i=0;i<y;i++){
        int q,l;
        cin>>q>>l;
        cout<<a[q][l]<<"\n";
    }
    return 0;
}
