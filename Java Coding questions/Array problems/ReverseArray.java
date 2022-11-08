package com.ty.arrays;

public class ReverseArray {
	public static void main(String[] args) {
		 int a[] =  {6,5,2,1,6,7,9};
		 
		 for(int i=0; i<(a.length/2); i++) {
			 int temp = a[i];
			 a[i] = a[a.length-1-i];
			 a[a.length-1-i] = temp;
		 }
		 
		 for(int i=0; i<a.length; i++) {			
			 System.out.print(a[i]+" ");
		 }
	}
}
