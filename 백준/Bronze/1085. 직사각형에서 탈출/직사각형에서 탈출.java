import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x=sc.nextInt();
        int y= sc.nextInt();
        int w= sc.nextInt();
        int h= sc.nextInt();

        if(x>y)
        {
            if(y>h-y)
                System.out.println((h-y>w-x)?w-x:h-y);
            else
                System.out.println((y>w-x)?w-x:y);
        }
        else
        {
            if (x > h - y)
                System.out.println((h - y > w - x) ? w - x : h - y);
            else
                System.out.println((x>w-x)?w-x:x);
        }
    }
}