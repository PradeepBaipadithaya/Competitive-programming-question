package com.ty.arrays;

public class DublicateElement {
	public static void main(String[] args) {
		int a[] = {5,7,9,5,5,7};
		boolean b[] = new boolean[a.length];
		
		for(int i=0; i<a.length;i++) {
			if(b[i] == false) {
				for(int j=i+1; j<a.length;j++) {
					if(a[i] == a[j]) {
						System.out.print(a[i]+" ");
						b[j] = true;
						break;
					}
				}
			}
		}
	}
	
	public DublicateElement() {
		DublicateElement dublicateElement = new DublicateElement();
	}
}
