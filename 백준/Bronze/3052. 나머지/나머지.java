import java.util.*;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc=new Scanner(System.in);
		int count=1;
		int[] arr=new int[10];
		
		for(int i=0; i<10; i++)
		{
			int a=sc.nextInt();
			arr[i]=a%42;
		}
		
		Arrays.sort(arr);
		
		for(int i=1; i<10; i++)
		{
			if(arr[i]!=arr[i-1])
			{
				count++;
			}
				
		}
		
		System.out.println(count);
	}

}
