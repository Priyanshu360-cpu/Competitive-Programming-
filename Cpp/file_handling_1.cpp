#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string abc;
    cin>>abc;
    ofstream MyFile("test.txt");
    MyFile<<abc;
    MyFile.close();
    string read;
    ifstream reader("test.txt");
    while(getline(reader,read)){
        cout<<read;
    }
    reader.close();
}
