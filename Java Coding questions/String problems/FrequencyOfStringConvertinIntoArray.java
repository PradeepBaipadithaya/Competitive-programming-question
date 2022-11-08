package com.ty.strings;

public class FrequencyOfStringConvertinIntoArray {
	public static void main(String[] args) {
		String s = "niharika";
		char a[] = s.toCharArray();
		boolean b[] = new boolean[a.length];
		
		for(int i=0; i<s.length(); i++) {
			int count = 1;
			if(b[i] == false) {
				for(int j=i+1; j<s.length(); j++) {
					if(s.charAt(i) == s.charAt(j)) {
						count++;
						b[j] = true;
					}
				}
				System.out.println(a[i]+" "+count);
			}
		}
	}
}
