package com.ty.strings;

import java.util.*;

public class DublicateElementsInArray {
	public static void main(String[] args) {
		String s = "niharikai";
		boolean b[] =  new boolean[s.length()];
		for(int i=0; i<s.length(); i++) {
			int count = 1;
			if(b[i] == false) {
				for(int j=i+1; j<s.length(); j++) {
					if(s.charAt(i) == s.charAt(j)) {
						count++;
						b[j] = true;

					}
				}
				if(count!=1){
					System.out.println(s.charAt(i)+"  "+count+" times ");
				}
			}
		}
	}
}
