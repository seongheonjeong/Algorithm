import java.io.*;
import java.util.HashMap;
import java.util.HashSet;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int []arr=new int[10001];
        st = new StringTokenizer(br.readLine());

        int n=Integer.parseInt(st.nextToken());
        int k=Integer.parseInt(st.nextToken());
        int cnt=0;
        for(int i=1; i<=n; i++)
        {
            if(n%i==0)
                arr[cnt++]=i;
        }

        if(arr[k-1]==0)
            System.out.println(0);
        else
            System.out.println(arr[k-1]);

        bw.flush();
        bw.close();
    }

}

