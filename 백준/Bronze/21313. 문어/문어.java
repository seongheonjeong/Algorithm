import java.util.*;

public class Main
{
  public static void main(String[ ]args)
  {
    Scanner sc=new Scanner(System.in);
  
    int N=sc.nextInt();
    int[] arr=new int[N];
    if(N%2==0)
    {
      for(int i=0; i<N; i++)
      {
        if(i%2==0)
        {
          arr[i]=1;
        }
        else
        {
          arr[i]=2;
        }
      }
    }
    else
    {
      for(int i=0; i<N; i++)
      {
        if(i%2==0)
        {
          arr[i]=1;
        }
        else
        {
          arr[i]=2;
        }
      }

      arr[N-1]=3;
    }
  
      for(int i=0; i<N; i++)
      {
        System.out.print(arr[i]);
        System.out.print(' ');
      }
      sc.close();
  }
}