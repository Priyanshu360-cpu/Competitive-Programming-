

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int firstRepeated(int *arr, int n) {
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]) return i+1;
        }
    }
  return -1;
    
}
int main() {

    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int *arr;
        arr = (int *)malloc(n * sizeof(int));

        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

        printf("%d\n", firstRepeated(arr, n));
    }
    return 0;
}  
