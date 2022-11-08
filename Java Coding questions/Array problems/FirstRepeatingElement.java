package com.ty.arrays;

public class FirstRepeatingElement {
	public static void main(String[] args) {
		int a[] = {1,5,3,4,3,5,6};
		
		for(int i=0; i<a.length; i++) {
			for(int j=i+1; j<a.length;j++) {
				if(a[i] == a[j]) {
					System.out.println("The first repeating element is: "+a[i]+" at index "+i);
					return;
				}
			}
		}
	}
}
