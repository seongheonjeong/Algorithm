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
        int A=Integer.parseInt(br.readLine());
        int B=Integer.parseInt(br.readLine());

        int a=A*(B%10); B/=10;
        int b=A*(B%10); B/=10;
        int c=A*B;

        bw.write(a+"\n"+b+"\n"+c+"\n"+(c*100+b*10+a)+"\n" );
        bw.flush();
        bw.close();
    }

}