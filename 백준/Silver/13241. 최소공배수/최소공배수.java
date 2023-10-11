import java.io.*;
import java.util.HashMap;
import java.util.StringTokenizer;

public class Main {

    public static long gcd(long a,long b)
    {
       if(b==0) return a;
       else return gcd(b,a%b);
    }
    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        st = new StringTokenizer(br.readLine());

        long A=Integer.parseInt(st.nextToken());
        long B=Integer.parseInt(st.nextToken());
        long gcd1=gcd(Math.max(A, B), Math.min(A, B));
        System.out.println((A*B)/gcd1);
        bw.flush();
        bw.close();
    }
}
