package com.ty.arrays;

public class SumOfAnyElementsInAnArray {
	public static void main(String[] args) {
		int[] a = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		int s = 0;
		for (int i = 0; i < a.length; i++) {
			s = a[i];
			String st = "" + a[i];
			for (int j = i + 1; j < a.length; j++) {

				st = st + "+" + a[j];
				s += a[j];
				if (s == 10) {
					System.out.println(st + "=" + 10);
					s = 0;
				}
			}

		}
	}
}
