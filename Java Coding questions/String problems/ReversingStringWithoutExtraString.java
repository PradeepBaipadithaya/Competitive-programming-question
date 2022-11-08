

public class ReversingStringWithoutExtraString {
	public static void main(String[] args) {
		String s = "Today is friday";
		char c[] = s.toCharArray();
		
		for(int i=0; i<=s.length()-1; i++) {
			char a = s.charAt(i);
			char b = s.charAt(s.length()-1-i);
			c[i] = b;
			b = a;
		}
		
		for(int i=0; i<c.length;i++) {
			System.out.print(c[i]+" ");

		}
	}
}
