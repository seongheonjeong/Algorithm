import java.io.*;
import java.util.HashMap;
import java.util.HashSet;
import java.util.StringTokenizer;

public class Main {

    public static int gcd(int a,int b)
    {
        if(b==0) return a;
        else return gcd(b,a%b);
    }
    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int answer1=0;
        int answer2=0;
        int answer3=0;
        st = new StringTokenizer(br.readLine());

        int a=Integer.parseInt(st.nextToken()); //분자
        int b=Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());

        int c=Integer.parseInt(st.nextToken()); //분자
        int d=Integer.parseInt(st.nextToken());

        int m=(b*d)/gcd(Math.max(b,d),Math.min(b,d)); //최소 공배수
        answer1=a*(m/b);
        answer2=c*(m/d);
        answer3=answer1+answer2;
        int temp=gcd(Math.max(m,answer3),Math.min(m,answer3));
        m/=temp;

        answer3/=temp;
        System.out.print(answer3+" "+m);
        bw.flush();
        bw.close();
    }

}