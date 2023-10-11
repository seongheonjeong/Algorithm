import java.io.*;
import java.util.HashMap;
import java.util.HashSet;
import java.util.StringTokenizer;

public class Main {

    public static boolean isPrime(int num)
    {
        if (num < 2) return false;
        for(int i=2; i*i<=num; i++)
        {
            if(num%i==0) return false;
        }
        return true;
    }
    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;
        int cnt=0;
        int []arr=new int[10001];
         int sum=0;

        int M= Integer.parseInt(br.readLine());
        int N= Integer.parseInt(br.readLine());
        for(int i=M; i<=N; i++)
        {
            if(isPrime(i)) {
                sum += i;
                arr[cnt++]=i;
            }
        }

        if(sum==0)
            System.out.println(-1);
        else
        {
            System.out.println(sum);
            System.out.println(arr[0]);
        }
        bw.flush();
        bw.close();
    }

}

