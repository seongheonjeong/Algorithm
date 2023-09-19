

import java.util.Scanner;

public class Main
{

	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
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
	}

}
