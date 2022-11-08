package com.ty.arrays;

public class CommonElementInEachArray {
	public static void main(String[] args) {
		
		int a[] = {1,5,10,20,40,80};
		int b[] = {6,7,20,80,100};
		int c[] = {3,4,15,20,30,70,80,120};
		
		for(int i=0; i<c.length; i++) {
			for(int j=1; j<a.length; j++) {
				if(c[i] == a[j]) {
					for(int k=1; k<b.length;k++) {
						if(c[i] == b[k]) {
							System.out.print(c[i]+" ");
						}
					}
				}
			}
		}
	}
}
