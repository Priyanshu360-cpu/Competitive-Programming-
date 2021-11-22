include <stdio.h>

int main(void) {
     int j;
     int p;
     int a = 1;
scanf("%d",&j); 
p = j;
int y = 0;
int l = 232;
while(j>0){
j=j/10;
y=y+1;
}
j=p; 
int c=1;
int t=0;

int o = 1;
if(y>3){
if(y%2==0){
int x = y/2; 
while(x>0){
c=c*10;
x--; 
}
int v = y; 
while(c>0){
while(j>0) {
    if(v!=x) {
    j=j/10;
}
else{
    t = t+((j%10)*c);
    x--;
    j=p;
}
}
j=p;
y=y-1;
v=y;
c=c/10;
}}

else{
    t++;
    int x; 
x=y/2-1;
int v = y;
int c = 1;
while(x>0){
c=c*10;
x--; 
}
while(c>0){
    while(j>0) {
t = t +j%10*c;
c=c/10; 
j=j/10; 
}
j=p;
}
}
}
printf("%d",t); 



}
