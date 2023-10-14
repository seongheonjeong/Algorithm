import java.io.*;
import java.util.*;

public class Main {



    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        StringTokenizer st;
        boolean []arr=new boolean[1000001];
        Arrays.fill(arr,true);
        arr[1]=false;
        for(int i=2; i*i<=1000000; i++)
        {
            if(arr[i])
            {
                for(int k=i*i; k<=1000000; k+=i)
                {
                    arr[k]=false;
                }
            }
        }

        int T = Integer.parseInt(br.readLine());
        for(int i=0; i<T; i++)
        {
            List<Integer> list=new ArrayList<>();
            int answer=0;
            int n=Integer.parseInt(br.readLine());
            for(int j=2; j<n; j++)
            {
                if(arr[j])
                    list.add(j);
            }
            int left=0;
            int right=list.size()-1;

            while(left<=right)
            {
                if(list.get(left)+list.get(right)==n)
                {
                    answer++;
                    left++;
                    right--;
                }
                else if(list.get(left)+list.get(right)>n)
                    right--;
                else
                    left++;

            }
            bw.write(answer+"\n");
        }


        bw.flush();
        bw.close();
    }

}