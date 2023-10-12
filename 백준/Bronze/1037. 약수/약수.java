import java.io.*;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.StringTokenizer;

public class Main {
    
    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;
        int N=Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine());
        int []arr=new int[N];

        for(int i=0; i<N; i++)
        {
            arr[i]=Integer.parseInt(st.nextToken());
        }
        Arrays.sort(arr);
        if(N==1)
            bw.write(arr[0]*arr[0]+" ");
       else
        {
            bw.write(arr[0]*arr[arr.length-1]+" ");
        }
        bw.flush();
        bw.close();
    }

}