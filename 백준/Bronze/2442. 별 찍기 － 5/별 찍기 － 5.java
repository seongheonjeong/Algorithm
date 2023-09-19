
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
	}

}
