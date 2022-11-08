import java.lang.*;

public class ReversingEachWord {
	public static void main(String[] args) {
		String s= "Today is friday";
		String s1 = "";
		String s2 = "";
		for(int i=0; i<s.length();i++) {
			char ch=s.charAt(i);
			if(ch!=' ') {
				s2=ch+s2;
			}
			else
			{
				s1=s1+s2+" ";
				s2="";	
			}
		}
		s1=s1+s2;
		System.out.println(s1);
	}
}
