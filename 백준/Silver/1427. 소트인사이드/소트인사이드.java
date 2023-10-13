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
        int cnt=0;
        int[]arr=new int[10];
        while(N>0)
        {
            arr[cnt++]=N%10;

            N/=10;
        }
        Arrays.sort(arr,0,cnt);
        for(int i=cnt-1; i>=0;  i--)
        {
            System.out.print(arr[i]);
        }
        bw.flush();
        bw.close();
    }

}