package com.ty.arrays;

public class MaxSumInConfiguration {
	public static void main(String[] args) {
		int a[] = {8, 3, 1, 2};
		int sum = 0;
		int count=0;
		int length = 0;
		int b[] = new int[a.length];
		int index=0;
		
		while(length < a.length) {
			int first = a[0];
			for(int i=0; i<a.length-1; i++) {
				a[i] = a[i+1];
			}
			a[a.length-1] = first;
			
			for(int i=0; i<a.length; i++) {
				sum = sum+a[i]*count++;
			}
			
			b[index++] = sum;
			sum=0;
			count=0;
			length++;
		}
		
		int max = b[0];
		
		for(int i=1; i<a.length;i++) {
			if(max < a[i]) {
				max = a[i];
			}
		}
		System.out.println("Maximum sum of configurtation is: ");
	}
}
