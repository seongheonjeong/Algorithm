import java.util.*;

public class Main {

	public static void main(String[] args) {
		
		int[] cnt=new int[26];
		int max=0;
		int index=0;
		int cnt2=0;
		Scanner sc = new Scanner(System.in);

		String str = sc.nextLine();

	
		
		for(int i=0; i<str.length(); i++)
		{
			if(str.charAt(i)>='A'&&str.charAt(i)<='Z')
			{
				cnt[str.charAt(i)-'A']++;
			}
			else
			{
				cnt[str.charAt(i)-'a']++;
			}
		}
		
		for(int i=0; i<cnt.length; i++)
		{
			if(cnt[i]>max)
			{
				max=cnt[i];
				index=i;
				cnt2=0;
			}
			else if (cnt[i]==max)
			{
				cnt2++;
			}
			
		}
		if(cnt2==0)
		{
			System.out.println((char)(index+'A'));
		}
		else
			System.out.println("?");
		
	}
}
