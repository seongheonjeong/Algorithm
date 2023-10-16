import java.io.*;
import java.lang.reflect.Array;
import java.util.*;

public class Main {

    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int N=Integer.parseInt(br.readLine());

        int []dp=new int[N];
        int []arr=new int[N];
        st = new StringTokenizer(br.readLine());
        for(int i=0; i<N; i++)
        {
            arr[i]=Integer.parseInt(st.nextToken());
        }
        dp[0]=arr[0];
        int max=arr[0];
        for(int i=1; i<N; i++)
        {
            dp[i]=Math.max(dp[i-1]+arr[i],arr[i]);
            max=Math.max(dp[i],max);
        }
        bw.write(max+"\n");
        bw.flush();
        bw.close();
    }

}