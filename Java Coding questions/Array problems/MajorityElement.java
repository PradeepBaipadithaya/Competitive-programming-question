package com.ty.arrays;

public class MajorityElement {
	public static void main(String[] args) {
		int a[] = {3,1,3,3,2};
		
		boolean b[] = new boolean[a.length];
		
		while(true) {
			int count =0;
			for(int i=0; i<a.length; i++) {
				if(b[i] == false) {
					for(int j=i+1; j<a.length;j++) {
						if(a[i] == a[j]) {
							count++;
							b[j] = true;
						}
					}
					if(count > (a.length/2)) {
						System.out.println("The element is: "+a[i]);
					}
				}	
			}
			
		}

	}
}
