package com.ty.strings;

import static java.lang.Math.max;

public class Demo {
	public static String test_="";
	public static String res="";
	public static void main(String[] args) {
		int n =21191;
		if(n==2 || n==3){
			System.out.println("Prime no");
		}
		else if((n-1)%6==0 ||(n+1)%6==0){
			System.out.println("Prime no");
		}
		else{
			System.out.println("Not prime");
		}

	}
}
