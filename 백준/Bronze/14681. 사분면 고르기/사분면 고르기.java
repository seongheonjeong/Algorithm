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

        int x=Integer.parseInt(br.readLine());
        int y=Integer.parseInt(br.readLine());

        if(x>0 && y>0)
        {
            bw.write(1+"\n" );
        }
        else if(x<0&&y>0)
        {
            bw.write(2+"\n" );
        }
        else if(x<0&&y<0)
        {
            bw.write(3+"\n" );
        }
        else if(x>0&&y<0)
        {
            bw.write(4+"\n" );
        }

        bw.flush();
        bw.close();
    }

}