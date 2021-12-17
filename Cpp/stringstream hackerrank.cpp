#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
    char ch;
    vector<int> g;
    int a; 
    
    ss>>a>>ch;
    g.push_back(a);
    int d = str.size();
    while(d){
        if(ch==','){
            ss>>a>>ch;
            if(ss){
            g.push_back(a);
            }
            else{
                g.push_back(a);
                break;
            }
            d=d-1;
        }
    }
    return g;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
