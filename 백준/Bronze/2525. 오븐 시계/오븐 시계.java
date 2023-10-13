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
        int h=Integer.parseInt(st.nextToken());
        int t=Integer.parseInt(st.nextToken());

        int time=Integer.parseInt(br.readLine());

        t+=time;


        while(t>=60)
        {
            t-=60;
            h++;
        }
        if(h>23)
            h-=24;

        System.out.print(h+" "+t);

        bw.flush();
        bw.close();
    }

}