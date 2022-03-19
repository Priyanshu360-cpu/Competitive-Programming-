#include<stdio.h> 
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
int main()
{
   char a[100]; 
   printf("\e[1;1H\e[2J");
   printf("Enter you data ");
   scanf("%[^\n]s",a);
   for(int i=0;i<100;i++){
       if(a[i]=='\0') break;
       switch(a[i]){
           case 'H':
            printf("\033[1;31m");
            sleep(1);
            printf("||      ||\n");
            sleep(1);
            printf("||      ||\n");
            sleep(1);
            printf("||------||\n");
            sleep(1);
            printf("||      ||\n");
            sleep(1);
            printf("||      ||\n");
            printf("\033[0m");
            
            break;
           case 'A':
            printf("\033[0;33m");
            sleep(1);
            printf("    /\\    \n");
            sleep(1);
            printf("   /  \\    \n");
            printf("  /----\\    \n");
            sleep(1);
            printf(" /      \\    \n");
            sleep(1);
            printf("/        \\    \n");
            printf("\033[0m");
            
            break;
           case 'P':
            printf("\033[0;36m");
            sleep(1);
            printf("----------\n");
            sleep(1);
            printf("|         |\n");
            sleep(1);
            printf("|         |\n");
            sleep(1);
            printf("-----------\n");
            sleep(1);
            printf("|\n");
            sleep(1);
            printf("|\n");
            sleep(1);
            printf("\033[0m");
            
            break;
          case 'Y':
          printf("\033[0;35m");
           sleep(1);
           printf("\\        /\n");
           sleep(1);
           printf(" \\      /\n");
           sleep(1);
           printf("  \\    /\n");
           sleep(1);
           printf("     |    \n");
           sleep(1);
           printf("     |    \n");
           sleep(1);
           printf("     |    \n");
           printf("\033[0m");
           
           break;
          case 'O':
           printf("\033[0;32m");
           sleep(1);
           printf("----------\n");
           sleep(1);
           printf("|        |\n");
           sleep(1);
           printf("|        |\n");
           sleep(1);
           printf("|        |\n");
           sleep(1);
           printf("----------\n");
           sleep(1);
           printf("\033[0m");
           
           break;
          case 'L':
           printf("\033[0;34m");
           sleep(1);
           printf("|\n");
           sleep(1);
           printf("|\n");
           sleep(1);
           printf("|\n");
           sleep(1);
           printf("|\n");
           sleep(1);
           printf("---------\n");
           sleep(1);
           printf("\033[0m");
           
           break;
         case 'I':
           printf("\033[0;31m");
           sleep(1);
           printf("-----------\n");
           sleep(1);
           printf("     |     \n");
           sleep(1);
           printf("     |     \n");
           sleep(1);
           printf("     |     \n");
           sleep(1);
           printf("     |     \n");
           sleep(1);
           printf("     |     \n");
           sleep(1);
           printf("-----------\n");
           sleep(1);
           printf("\033[0m");
           
           break;
        case ' ':
         printf("\e[1;1H\e[2J");
         break;
        default:
         sleep(1);
         printf("keyword not found");
         sleep(1);
         printf("\e[1;1H\e[2J");
         break;
       }
   }
   return 0;
}
