package com.ty.arrays;

public class AlternatePositiveNegativeInteger {
	public static void main(String[] args) {
		
		int a[] = {9,4,-2,-1,5,0,-5,-3,2};
		
		if (a[0]>0) {
			for(int i=0; i<a.length; i+=2) {
				if(a[i] <= 0) {
					int temp = a[i];
					a[i] = a[i-1];
					a[i-1] = temp;
				}	
			}
		}
		
		for(int i=0; i<a.length; i++) {
			System.out.print(a[i]+" ");
		}
	}
}
