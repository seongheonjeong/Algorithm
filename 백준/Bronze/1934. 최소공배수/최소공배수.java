import java.io.*;
import java.util.HashMap;
import java.util.StringTokenizer;

public class Main {

    public static int gcd(int a,int b)
    {
        if(b==0) return a;
        else
            return gcd(b,a%b);
    }
    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;


        int T=Integer.parseInt(br.readLine());
        for(int i=0; i<T; i++)
        {
            st = new StringTokenizer(br.readLine());
            int A=Integer.parseInt(st.nextToken());
            int B=Integer.parseInt(st.nextToken());
            System.out.println((A*B)/gcd(A,B));
        }

        bw.flush();
        bw.close();
    }
}
