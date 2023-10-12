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
        int answer=0;

        for(int i=1; i*i<=N; i++)
        {
            answer++;
        }
        bw.write(answer+" ");
        bw.flush();
        bw.close();
    }

}