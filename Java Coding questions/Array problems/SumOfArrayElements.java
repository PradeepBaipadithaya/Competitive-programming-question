package com.ty.arrays;

public class SumOfArrayElements {
	public static void main(String[] args) {
		int a[] = {1,2,3,4,5,6,7,8,9};
		
		for(int i=0; i<a.length; i++) {
			for(int j=i+1; j<a.length;j++) {
				if(a[i]+a[j]==10) {
					System.out.println(a[i]+" + "+a[j]+" = "+10);
				}
			}
		}
	}
}
