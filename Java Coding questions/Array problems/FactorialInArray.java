package com.ty.arrays;

public class FactorialInArray {
	public static void main(String[] args) {
		int n = 10;
		int a[] = new int[n];
		int fact = 1;
		
		for(int i=1; i<=n; i++) {
			a[i-1] = i;
			fact = fact*i;
		}
		System.out.println("Factorial of "+n+" is: "+fact);
		System.out.println();
		System.out.println("Array elemets are: ");
		
		for(int i=0; i<a.length; i++) {
			System.out.print(a[i]+" ");
		}
	}
}
