package com.ty.arrays;

public class AddElementAtSpecifiedIndex {
	public static void main(String[] args) {
		int a[] = {1,2,7,9,0,10};
		int add = 11;
		int index = 3;
		
		int b[] = new int[a.length+1];
		
		b[index] = add;
		
		for(int i=0; i<a.length;i++) {
			if(i < index) {
				b[i] = a[i];
			}else {
				b[i+1] = a[i];
			}
		}
		
		for(int i=0; i<b.length; i++) {
			System.out.print(b[i]+" ");
		}
	}
}
