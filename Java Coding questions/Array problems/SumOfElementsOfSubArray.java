package com.ty.arrays;

public class SumOfElementsOfSubArray {
	public static void main(String[] args) {
		int a[] = {1,2,3,4,5,6,7,8,9};
		int sum = 0;
		int temp = 0;
		
		for(int i=0; i<a.length/2; i++) {
			sum = sum+a[i];
		}
		
		if(sum == 10) {
			System.out.println("Sum of the sub array1 is "+sum);
		}else {
			System.out.println("Its not correct");
		}
		
		for(int i=(a.length/2)+1; i<a.length; i++) {
			temp = temp+a[i];
		}
		
		if(temp == 10) {
			System.out.println("Sum of the sub array2 is "+sum);
		}else {
			System.out.println("Its not correct");
		}
	}
}
