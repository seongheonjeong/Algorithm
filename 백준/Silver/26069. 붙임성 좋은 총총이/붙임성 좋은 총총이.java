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
        set.add("ChongChong");
        for(int i=0; i<N; i++)
        {
            st = new StringTokenizer(br.readLine());
            String str1=st.nextToken();
            String str2=st.nextToken();
            if(set.contains(str1)|| set.contains(str2))
            {
                set.add(str1);
                set.add(str2);
            }
        }
        System.out.println(set.size());
        bw.flush();
        bw.close();
    }
}
