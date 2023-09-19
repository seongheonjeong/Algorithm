import java.util.Scanner;

public class Main
{

	public static void main(String[] args)
	{

		
		Scanner sc=new Scanner(System.in);
		int N=sc.nextInt();
		
		
		for(int i=0; i<N; i++)
		{
			
			for(int x=0; x<i; x++)
			{
				System.out.print(' ');
			}
			for(int j=0; j<N*2-1-(i*2); j++)
			{
				System.out.print("*");
				
			}											
			System.out.println();
		}	

		for(int i=1; i<N; i++)
		{
			
			for(int x=i; x<N-1; x++)
			{
				System.out.print(' ');
			}
			for(int j=0; j<i*2+1; j++)
			{
				System.out.print("*");
				
			}
												
			System.out.println();
		}
		sc.close();
	}

}