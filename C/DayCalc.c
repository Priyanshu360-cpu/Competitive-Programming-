#include <stdio.h>

int main(void) {
    
    int d,m,y,day=0; 
    scanf("%d%d%d",&d,&m,&y); 
switch(m) { 
case 1:day=day+31;
break;
case 3:day=day+31*2;
break;
case 5:day=day+31*3;
break;
case 7:day=day+31*4;
break;
case 8:day=day+31*5;
break;
case 10:day=day+31*6;
break;
case 12:day=day+31*7;
}
switch(m) { 
case 4:day=day+30;
break;
case 6:day=day+30;
break;
case 9:day=day+30;
break;
case 11:day=day+30;
break;
}
switch(y%4==0) { 
case 1:day=day+28;
break;
case 0:day=day+27;
break;
}
printf("%d",day+d);
	// your code goes here
	return 0;
}

