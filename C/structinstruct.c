#include <stdio.h>
struct address{
    char city[20];
    long long int pin;
    long long int phone;
};
struct employee{
    char name[20];
    int age;
    int salary;
    struct address a;
};
int main(){
    int n;
    scanf("%d",&n);
    struct employee e[n];
    for(int i=0;i<n;i++){
        scanf("%s %d %d",e[i].name,&e[i].age,&e[i].salary);
        scanf("%s %lld %lld",e[i].a.city,&e[i].a.pin,&e[i].a.phone);
    }
    for(int i=0;i<n;i++){
        printf("%s\n",e[i].name);
        printf("%d\n",e[i].age);
        printf("%d\n",e[i].salary);
        printf("%s\n",e[i].a.city);
        printf("%lld\n",e[i].a.pin);
        printf("%lld\n",e[i].a.phone);
    }
    return 0;
}
