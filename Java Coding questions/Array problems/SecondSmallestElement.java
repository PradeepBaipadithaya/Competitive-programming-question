package com.ty.arrays;

public class SecondSmallestElement {
	public static void main(String[] args) {
		int a[] = {1,2,3,4,6,5,0, -1,-2,-3};
		int max = a[0];
		int s = 0;
		
		for(int i=1; i<a.length; i++) {
			if(max > a[i]) {
				s=max;
				max = a[i];
			}
			else if(s > max) {
				s=a[i];
			}
		}
		
			System.out.println("The second smallest element is "+s);
	}
}
