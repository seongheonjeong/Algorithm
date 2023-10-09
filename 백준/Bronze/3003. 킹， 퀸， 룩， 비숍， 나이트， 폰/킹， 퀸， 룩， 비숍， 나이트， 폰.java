import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int []count=new int[6];
        int []answer={1,1,2,2,2,8};
        int []chess=new int[6];
        for(int i=0; i<chess.length; i++)
        {
            chess[i]=sc.nextInt();
            count[i]=answer[i]-chess[i];
        }
        for(int i=0; i<count.length; i++)
        {
            System.out.print(count[i]+" ");
        }
        sc.close();
    }
}
