import java.io.*;
import java.util.HashMap;
import java.util.HashSet;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;
        int answer=0;
        HashSet<String> set=new HashSet<>();
        int N=Integer.parseInt(br.readLine());

        for(int i=0; i<N; i++)
        {
            st = new StringTokenizer(br.readLine());
            String str1=st.nextToken();
            if(str1.equals("ENTER"))
            {
                answer+=set.size();
                set=new HashSet<>();
            }
            else
                set.add(str1);
        }
        bw.write(set.size()+answer+"\n");
        bw.flush();
        bw.close();
    }
}
