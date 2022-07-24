#include <stdio.h>
#define newline printf("\n") 
void solver(int* a,int n,int t,int o,int r){
int m=a[0];
	int ni=a[0];
	for(int i=0;i<n;i++) {
	    if(m>a[i])m=a[i];
	    if(ni<a[i])ni=a[i];
	} // finding max/min
	printf("Max=%d\nMin=%d\n",ni,m);
	for(int i=0;i<n/2;i++){
	    int j=a[i];
	    a[i]=a[n-i-1];
	    a[n-i-1]=j;
	}// reversing array
	for(int i=0;i<n;i++)printf("%d ",a[i]);
	for(int i=1;i<n;i++){
	    int k=a[i];
	    int j=i-1;
	    while (j >= 0 && a[j] > k) 
        {
        a[j + 1] = a[j];
        j = j - 1;
        }
        a[j + 1] = k;
	} // insertion sort
	newline;
		for(int i=0;i<n;i++)printf("%d ",a[i]);
		printf("\n");
		for(int i=0;i<n;i++){
		    if(a[i]==t)printf("Element %d found at %d\n",t,i);
		}//linear search
        int p=0;
			for(int i=0;i<n;i++){
			    if(a[i]>=o&&a[i]<=r)p++;
			}//searching between numbers
            printf("%d\n",p);
}
int main() {
	int n;
	scanf("%d",&n);
    int o,r,t;
	int a[n];
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&t);
    scanf("%d",&o);
    scanf("%d",&r);
	solver(a,n,t,o,r);
	return 0;
}

