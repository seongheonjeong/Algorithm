import java.io.*;
import java.util.StringTokenizer;
import java.util.Stack;


public class Main {

    static  int N;
    static  int M;
     static String[]chess=new String[51];
     static String[]whiteChess={"WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW"};
     static String[]blackChess={"BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB"};

    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;
        int answer = Integer.MAX_VALUE;

        st = new StringTokenizer(br.readLine());
        N=Integer.parseInt(st.nextToken());
        M=Integer.parseInt(st.nextToken());
        for(int i=0; i<N; i++)
        {
            chess[i]=br.readLine();
        }


        for(int i=0; i+8<=N; i++)
        {
            for(int j=0; j+8<=M; j++)
            {
                int temp=Math.min(firsBlackCnt1(i,j),firsWhiteCnt1(i,j));
                answer=Math.min(temp,answer);
            }
        }
        System.out.println(answer);

        bw.flush();
        bw.close();
    }
    public static int firsWhiteCnt1(int a,int b) //y축,x축
    {
        int cnt=0;
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if(whiteChess[i].charAt(j)!=chess[i+a].charAt(j+b))
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
    public static int firsBlackCnt1(int a,int b) //y축,x축
    {
        int cnt=0;
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if(blackChess[i].charAt(j)!=chess[i+a].charAt(j+b))
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
}
