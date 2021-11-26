

import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner fire = new Scanner(System.in);
		int t = fire.nextInt();
		while(t-->0){
		int limit = fire.nextInt();
		String s = fire.next();
		Double count = 0.0;
		for (int i = 1;i<limit;i++){
		    if(s.charAt(i-1)!=s.charAt(i)){
		        count=count+0.5;
		    }
		}
		System.out.println((int) Math.round(count));
	}
	}
}
