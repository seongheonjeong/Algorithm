import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int result=0;
        int n=sc.nextInt();
        int k=sc.nextInt();
        int []arr=new int[n];

        for(int i=0; i<n; i++)
        {
            arr[i]=sc.nextInt();
        }

        for(int i=arr.length-1; i>=0; i--)
        {
            while(arr[i]<=k)
            {
                result++;
                k-=arr[i];
            }

        }
        System.out.println(result);
        sc.close();
    }
}