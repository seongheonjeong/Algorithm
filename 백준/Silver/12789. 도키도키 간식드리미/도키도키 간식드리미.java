import java.io.*;
import java.util.StringTokenizer;
import java.util.Stack;


public class Main {
    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;


        Stack<Integer> stack = new Stack<>();
        int N=Integer.parseInt(br.readLine());
        int []arr=new int[N];
        int order=1;
        st = new StringTokenizer(br.readLine());
        for(int i=0; i<N; i++)
        {
            arr[i]=Integer.parseInt(st.nextToken());
        }
        for(int i=0; i<N; i++)
        {
            stack.push(arr[i]);
            while(!stack.empty()&&stack.peek()==order)
            {
                stack.pop();
                order++;

            }
        }

        if(stack.empty())
            bw.write("Nice"+'\n');
        else
            bw.write("Sad"+'\n');
        bw.flush();
        bw.close();
    }
}
