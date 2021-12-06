#include <stdio.h>

int main(void) { 
    int n;
    scanf("%d",&n);
	int a[n];
	int h =0;
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=i;j++){
	        if(h<=n){
	        a[h]=j;
	        h++;
	        }
	    }
	} 
	for(int i =0;i<=n;i++){
	    printf("%d",a[i]);
	}
	return 0;
}
