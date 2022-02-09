/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan= new Scanner(System.in);
		int a= scan.nextInt();
		while(a-->0)
		{
		    int y =scan.nextInt();
		    int x=scan.nextInt();
		    
		   if(x<=y)System.out.println(x);
		   
		   else{
		       while(x>y)x=x-y-1;
		       System.out.println(x);
		   }
		}
		scan.close();
	}
}
