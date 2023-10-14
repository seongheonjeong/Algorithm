import java.io.*;
import java.lang.reflect.Array;
import java.util.*;

public class Main {

    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int N=Integer.parseInt(br.readLine());
        if(N<100)
        {
            System.out.println(N);
        }
        else
        {
            int answer=99;
            for(int i=100; i<=N; i++)
            {

                ArrayList<Integer> list = new ArrayList<>();
                list.add(i%10);
                list.add((i/10)%10);
                list.add(i/100);

               if(list.get(2)-list.get(1)==list.get(1)-list.get(0))
                   answer++;
            }
            System.out.println(answer);

        }

        bw.flush();
        bw.close();
    }

}