#include <stdio.h>

int main(void) {
  int a;
scanf("%d",&a);
if(a%4==0){
if(a%100==0){
if(a%400==0){
printf("Leap");}
else{
printf("Not Leap");}}
else{
printf("Leap");
}}else{printf("Not Leap");}
	return 0;
}

