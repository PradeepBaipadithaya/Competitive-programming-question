package com.ty.arrays;

import java.util.Scanner;

public class Array2D {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number of rows: ");
		int row = sc.nextInt();
		System.out.println("Enter number of columns: ");
		int column = sc.nextInt();
		
		int[][] a = new int[row][column];
		System.out.println("Enter vaules inside both array: ");
		for(int i=0; i<a.length; i++)
		{
			for(int j =0; j<a[i].length;j++) {
				a[i][j] = sc.nextInt();
			}
		}
		System.out.println("Matrix "+row+" x "+column+" is ");
		for(int i=0; i<a.length;i++) {
			for(int j=0; j<a[i].length; j++) {
				System.out.print(a[i][j]+" ");
			}
			System.out.println();
		}
	}
}
