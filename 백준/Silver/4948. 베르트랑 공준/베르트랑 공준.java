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
        boolean []arr=new boolean[250000];
        Arrays.fill(arr,true);
        arr[0]=false; arr[1]=false;
        for(int i=2; i*i<=246912; i++)
        {
            if(arr[i])
            {
                for(int k=i*i; k<=246912; k+=i)
                {
                    arr[k]=false;
                }
            }
        }
        while(true)
        {
            int N = Integer.parseInt(br.readLine());
            int answer=0;
            if(N==0)
                break;
            for(int i=N+1; i<=2*N; i++)
            {
                if(arr[i])
                    answer++;
            }
            bw.write(answer+"\n");
        }

        bw.flush();
        bw.close();
    }

}