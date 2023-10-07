import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int answer=0;
       int [][]arr=new int[101][101];
       for(int i=0; i<4; i++) {
           int a, b, c, d;
           a = sc.nextInt();
           b = sc.nextInt();
           c = sc.nextInt();
           d = sc.nextInt();
           for (int x = a; x < c; x++) {
               for (int y = b; y < d; y++) {
                   arr[x][y] = 1;
               }
           }
       }
           for(int j=0; j<101; j++) {
               for (int k = 0; k < 101; k++) {
                   if (arr[j][k] == 1)
                       answer++;

               }
           }
            System.out.println(answer);
            sc.close();
    }
}