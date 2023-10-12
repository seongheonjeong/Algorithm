import java.io.*;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.StringTokenizer;

public class Main {

    public static boolean prime(long a)
    {
        if(a<2)
            return false;
        for(long i=2; i*i<=a; i++)
        {
            if(a%i==0)
                return false;
        }

            return true;
    }
    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;
        int T=Integer.parseInt(br.readLine());
        for(int i=0; i<T; i++)
        {
            Long n=Long.parseLong(br.readLine());
            while(true)
            {
                if(prime(n))
                {
                    bw.write(n+"\n");
                    break;
                }
                else
                    n++;
            }
        }


        bw.flush();
        bw.close();
    }

}