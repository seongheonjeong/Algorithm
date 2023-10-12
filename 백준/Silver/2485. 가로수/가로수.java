import java.io.*;
import java.util.StringTokenizer;

public class Main {

    public  static int gcd(int a,int b)
    {
        if(b==0) return a;
        else return gcd(b,a%b);
    }


    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;


        int N=Integer.parseInt(br.readLine());
        int min=Integer.MAX_VALUE;
        int []arr=new int[100001];
        int []interval=new int[N-1];
        int gcdN=0; int answer=0;
        for(int i=0; i<N; i++)
        {
            arr[i]=Integer.parseInt(br.readLine());
        }

        for(int i=0; i<N-1; i++)
        {
            interval[i]=arr[i+1]-arr[i];
        }

        gcdN=interval[0];
        for(int i=1; i<interval.length; i++)
        {
                gcdN=gcd(Math.max(gcdN,interval[i]),Math.min(gcdN,interval[i]));
        }

        for(int i=0; i<interval.length; i++ )
        {
            if(interval[i]>gcdN)
            {
                answer+=(interval[i]/gcdN-1);
            }
        }
        System.out.println(answer);



        bw.flush();
        bw.close();
    }
}
