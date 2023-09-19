import java.util.Scanner;

public class Main
{

	public static void main(String[] args)
	{

		
		Scanner sc=new Scanner(System.in);
		int N=sc.nextInt();
		
		
		for(int i=1; i<=N; i++)
		{						
			for(int j=0; j<i; j++)
			{
				System.out.print("*");
			}
			for(int x=0; x<N*2-(i*2); x++)
			{
				System.out.print(' ');
			}	
			for(int y=0; y<i; y++)
			{
				System.out.print("*");
			}										
			System.out.println();
		}			

		for(int i=2; i<=N; i++)
		{						
			for(int j=i-1; j<N; j++)
			{
				System.out.print("*");
			}
			for(int x=0; x<(i-1)*2; x++)
			{
				System.out.print(' ');
			}	
			for(int y=i-1; y<N; y++)
			{
				System.out.print("*");
			}									
			System.out.println();
		}			
		sc.close();
	}

}