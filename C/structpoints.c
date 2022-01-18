#include <stdio.h>
struct employee{
    long long int empid;
    char empname[20];
    float basic;
}a[3]={{23243243,"Ravi",323.34},{232243,"Rohan",3232.4},{345345,"Manohar",2343.56}};
typedef struct{
    char name[20];
    int sem;
    int sb[3];
    int avg;
}student;
void avg(int *p,student *a){
for(int i=0;i<3;i++){
    *p=(*p+a->sb[i])/2;
}
a->avg=*p;
}
struct date{
    int d;
    int m;
    int y;
}alto[2]={{2,3,2000},{3,4,2010}};
int dater(struct date *a){
if(a->y>(a+1)->y) return 1;
 if(a->y<(a+1)->y) return 2;
  if(a->m>(a+1)->m) return 1;
  if(a->m<(a+1)->m) return 2;
  if(a->d>(a+1)->d) return 1;
  if(a->d<(a+1)->d) return 2;
  else return 3;
  
}
void employer(struct employee *p){
    printf("Empid\tName\tGross Salary\n");
    for(int i=0;i<3;i++)
    printf("%d\t%s\t%f\n",(p+i)->empid,(p+i)->empname,(p+i)->basic+(0.1* (p+i)->basic)+(0.2*(p+i)->basic));
}
struct info{
    int roll;
    char name[20];
    int cgpa;
}inf={2,"Ravi",9};
struct element{
    int a;
    int b;
    int c;
}gh={2,3,4};
int main(void) {
 employer(a);
 int *p;
 *p=0;
 student a={"ram",3,{34,40,50},0};
 avg(p,&a);
 printf("\n%d",a.avg);
 struct element *alph=&gh;
 printf("\n%d\n%d\n%d",alph->a,alph->b,alph->c);
 
 printf("\n%d %s %d ",inf.roll,inf.name,inf.cgpa);
 int final = dater(alto);
 switch(final){
     case 1:
      printf("\nFirst");
      break;
     case 2:
      printf("\nSecond");
      break;
     case 3:
      printf("\nSame");
      break;
     default:
      printf("\nError");
 }
	return 0;
}
