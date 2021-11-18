#include <stdio.h>

int main(void) {
    int a,i=1,b,c,d,e,g;
    float f; 
scanf("%d",&a);
scanf("%d%d",&b,&c);
scanf("%d",&d);
scanf("%d",&g); 
scanf("%d",&e);
scanf("%f",&f);
while(i<=a){
printf("%d\n",i);
i++;
}
i--; 
while(i>=1){
printf("%d\n",i); 
i--;
}
i=1;
while(i<=10){
printf("7X%d=%d\n",i,7*i);
i++; 
}
if(b>c){
i=c;
while(i<=b){
printf("%d \n",i); 
i++;
}
}
else{
i=b;
while(i<=c){
printf("%d \n",i);
i++;
}
}
if(b>c){
i=c;

while(i<=b){
if(i%3==0&&i%7==0){
printf("%d \n",i); 
}
i++;
}
}
else{
i=b;
while(i<=c){
if(i%3==0&&i%7==0){
printf("%d \n",i);
}
i++;
}
}
i=1;
int x = 1;
while(x<=d-1){
i=i+(i+2);
x++;
}
printf("%d\n",x);
int j = g;
int y = g; 
while(g>1){
    g=g-1;
    j=j*g; 
} 
printf("%d\n",j);

x=1;
i=1;
int u = d;
while(x<=d){
i=i*u;
u=u-1;
x++;
}
printf("%d\n ",x);

float o = 1; 
float v =1;
float z = 0;
while(o+1<=e){
z=z+1.0/v; 
v=v+2; 
o++;
}
printf("%f \n ",z);
float q = 0;
while(f>=2) {
    q=q+f/(f-1.0);
    f=f-1.0;
}
    printf("%f",q); 
} 
