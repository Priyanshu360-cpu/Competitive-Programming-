#include <stdio.h>
struct student{
    char name[20];
    int roll;
    int marks[5];
};
void marks(struct student s[],int n,int roll){
    int i;
    printf("\n the marks of 5 subjects\n");
    for(int j=0;j<n;j++){
          int p=0;
    for(i=0;i<5;i++){
        p=p+s[j].marks[i];
        printf("%d",s[j].marks[i]);
    }
    if(s[j].roll==roll){
        printf("\n %s ",s[j].name);
        printf("\n %s ",s[j].roll);
        for(int p=0;p<5;p++){
        printf("%d",s[j].marks[p]);
    }
    }
    for(i=0;i<5;i++){
       for(j=i+1;j<5;j++){
           if(s[j].marks[i]>s[j].marks[i+1]){
               int temp=s[j].marks[i];
               s[j].marks[i]=s[j].marks[i+1];
               s[j].marks[i+1]=temp;
           }
    }
    }

    printf("\nTotal marks of %s is %d\n",s[j].name,p);
    printf("\nTotal percent of %s is %d\n",s[j].name,p/500*100);
    }
    }

int main(){
    int n;
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++){
        scanf("%s %d",s[i].name,&s[i].roll);
        for(int j=0;j<5;j++){
            scanf("%d",&s[i].marks[j]);
        }
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<5;j++){
            sum+=s[i].marks[j];
        }
        printf("%s %d %d\n",s[i].name,s[i].roll,sum);
       
    }
     marks(s,n,32);
    return 0;
}
