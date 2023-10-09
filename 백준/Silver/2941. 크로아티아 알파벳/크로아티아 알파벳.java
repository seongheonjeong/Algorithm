import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String[]arr={"c=","c-","dz=","d-","lj","nj","s=","z="};
        String str=sc.next();
        for(int i=0; i<arr.length; i++)
        {
            if(str.contains(arr[i]))
            {
                str=str.replace(arr[i],"!");
            }
        }
        
        System.out.println(str.length());

    }
}