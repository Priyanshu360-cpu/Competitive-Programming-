#include <stdio.h>
struct employe{
    char name[20];
    int age;
    int salary;
};
void display(struct employe* s,int n){
    printf("Name\tAge\tSalary\tGross\n");
    for(int i=0;i<n;i++)
        printf("%s \t%d \t%d\t%f\n",(s+i)->name,(s+i)->age,(s+i)->salary,((s+i)->salary*0.8+(s+i)->salary*0.1));
    
}
int main(){
    int n;
 scanf("%d",&n);
    struct employe e[n];
    for(int i=0;i<n;i++){
        scanf("%s %d %d",e[i].name,&e[i].age,&e[i].salary);
    }
    display(e,n);
    return 0;
}
