package com.ty.arrays;

public class LeftRotationInArray {
	public static void main(String[] args) {
		int a[] = { 8, 3, 1, 2, 5, 2, 0, 7,4 };

		int n = 4;
		
		for(int j=0; j<n; j++) {
			int first = a[0];

			for (int i = 0; i < a.length - 1; i++) {
				a[i] = a[i+1];
			}
			a[a.length-1] = first;
		}
		
		System.out.println("Array after left rotation: ");
		
		for(int i=0; i<a.length; i++) {
			System.out.print(a[i]+" ");
		}
	}
}
