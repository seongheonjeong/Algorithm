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
        st = new StringTokenizer(br.readLine());
        long A=Long.parseLong(st.nextToken());
        long B=Long.parseLong(st.nextToken());
        long C=Long.parseLong(st.nextToken());



        bw.write((A+B+C)+"\n" );
        bw.flush();
        bw.close();
    }

}