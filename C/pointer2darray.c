#include <iostream>
using namespace std;

int main() {
    int c=1;
	int a[3][4];
	for(int i=0;i<3;i++){
	    for(int j=0;j<4;j++){
	        *(*(a+i)+j)=c;
	        c=c+1;
	    }
	}
	for(int i=0;i<3;i++){
	    for(int j=0;j<4;j++){
	        printf("%d\n",*(*(a+i)+j));
	       
	    }
	}
	return 0;
}
