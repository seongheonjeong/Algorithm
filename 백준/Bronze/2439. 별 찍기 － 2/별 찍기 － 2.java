import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) {
		
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		
		for(int i=1; i<=n; i++)
		{
			for(int k=0; k<n-i; k++)
			{
				System.out.print(" ");
			}
			
			for(int j=0; j<i; j++)
			{
				System.out.print("*");
			}
			System.out.println();
		}
		
	}

}
