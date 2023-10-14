import java.io.*;
import java.util.*;

public class Main {



    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;
        int n=Integer.parseInt(br.readLine());
        int []arr=new int[n];
        st = new StringTokenizer(br.readLine());
        for(int i=0; i<n; i++)
        {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(arr);
        int x=Integer.parseInt(br.readLine());
        int s=0,w=n-1,sum=0,answer=0;
        while(s<w)
        {
           sum=arr[s]+arr[w];


           if(sum<=x) s++;
           else w--;

           if(sum==x) answer++;
        }

        bw.write(answer+"\n");

        bw.flush();
        bw.close();
    }

}