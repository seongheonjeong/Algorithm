import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char [][]chess=new char[8][8];
        int answer=0;
        for(int i=0; i<8; i++)
        {
            String row = sc.next();
            for(int j=0; j<8; j++)
            {
                chess[i][j]=row.charAt(j);
            }
        }

        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
               if((i%2==0&&j%2==0)||i%2==1&&j%2==1)
               {
                   if(chess[i][j]=='F')
                        answer++;
               }
            }
        }
        System.out.println(answer);
        sc.close();
    }
}