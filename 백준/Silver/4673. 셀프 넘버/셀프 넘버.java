import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        boolean []arr=new boolean[10001];
        for(int i=1; i<10001; i++)
        {
            int a=num(i);
            if(a<10001)
                arr[a]=true;
        }
        for(int i=1; i<10001; i++)
        {
            if(!arr[i])
            {
                System.out.println(i);
            }
        }
        sc.close();
    }

    public static int num(int n)
    {
        int s=n;
        while(n!=0)
        {
            s+=n%10;
            n/=10;
        }
        return s;
    }
}