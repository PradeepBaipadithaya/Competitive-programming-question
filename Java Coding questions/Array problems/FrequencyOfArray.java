package com.ty.arrays;

public class FrequencyOfArray {
	public static void main(String[] args) {
		int a[] = { 6, 3, 9, 5, 3, 6 };
		boolean b[] = new boolean[a.length];

		for (int i = 0; i < a.length; i++) {
			int count = 1;
			if (b[i] == false) {
				for (int j = i + 1; j < a.length; j++) {
					if (a[i] == a[j]) {
						count++;
						b[j] = true;
					}
				}
				System.out.println("The count of " + a[i] + " " + "is " + count);
			}
		}
	}
}
