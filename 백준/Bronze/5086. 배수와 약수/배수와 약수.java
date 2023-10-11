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

        while(true)
        {
            st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            int k = Integer.parseInt(st.nextToken());

            if(n==0&&k==0) break;

            if(k%n==0)
                System.out.println("factor");
            else if(n%k==0)
                System.out.println("multiple");
            else
                System.out.println("neither");

        }

        bw.flush();
        bw.close();
    }

}

