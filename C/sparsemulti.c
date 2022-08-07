//Brute Force Method

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=0;
        }
    }
    int g;
    scanf("%d",&g);
    int b[g][g];
    for(int i=0;i<g;i++){
        for(int j=0;j<g;j++){
            b[i][j]=0;
        }
    }
    printf("Enter No. of input in first array\n");
    int f;
    scanf("%d",&f);
    while(f--){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        a[x][y]=z;
    }
    printf("Enter No. of input in second array\n");
    int m;
    scanf("%d",&m);
    while(m--){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        b[x][y]=z;
    }
    for(int i=0;i<g;i++){
        for(int j=i+1;j<g;j++){
            int c=b[j][i];
            b[j][i]=b[i][j];
            b[i][j]=c;
        }
    }
    int c[n][g];
    for(int i=0;i<n;i++){
        for(int j=0;j<g;j++){
            c[i][j]=0;
            }
    }

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(a[i][j]!=0){
            for(int k=0;k<g;k++){
                for(int l=0;l<g;l++){
                    if(b[k][l]!=0&&l==j){
                        c[i][k]+=a[i][j]*b[k][l];
                    }
                }
            }
        }
    }
}
    for(int i=0;i<n;i++){
        for(int j=0;j<g;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}

//Optimistic Method

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int g;
    scanf("%d",&g);
    printf("Enter No. of input in first array\n");
struct value{
    int j;
    int i;
    int v;
}s[n];
struct sec{
    int j;
    int i;
    int v;
}w[g];
int del=0;
    int f;
    scanf("%d",&f);
    while(f--){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
            s[del].j=y;
            s[del].i=x;
            s[del].v=z;
            del++;
    }
    printf("Enter No. of input in second array\n");
    int m;
    scanf("%d",&m);
    int delta=0;
    while(m--){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        w[delta].j=x;
        w[delta].i=y;
        w[delta].v=z;
        delta++;
    }
    int c[n][g];
    for(int i=0;i<n;i++){
        for(int j=0;j<g;j++){
            c[i][j]=0;
            }
    }
for(int i=0;i<n;i++){
    for(int j=0;j<g;j++){
        if(s[i].j==w[j].j){
            c[s[i].i][w[j].i]=s[i].v*w[j].v;
        }
  }
}
    for(int i=0;i<n;i++){
        for(int j=0;j<g;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
