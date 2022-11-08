package com.ty.strings;

public class FrequencyInString {
	public static void main(String[] args) {
		String s = "niharika";
		boolean b[] = new boolean[s.length()];
		for (int i = 0; i < s.length(); i++) {
			int count = 1;
			if (b[i] == false) {
				for (int j = i + 1; j < s.length(); j++) {
					if (s.charAt(i) == s.charAt(j)) {
						count++;
						b[j] = true;
					}
				}
				System.out.println(s.charAt(i) + " " + count);
			}
		}

	}
}
