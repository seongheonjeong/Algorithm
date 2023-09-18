import java.util.*;

public class Main {
  public static void main(String[] args)
  {
    Scanner sc=new Scanner(System.in);
    
    long N=sc.nextInt();
    long answer=1;
    if(N==0)
    {
    	System.out.println(1);
    	return;
    }
    for(int i=1; i<=N; i++)
    {
    	answer*=i;
    }
    System.out.println(answer);
//    int a,b,c,d,e,f;
//    int ans1=0,ans2=0; //x,y
//    a=sc.nextInt();
//    b=sc.nextInt();
//    c=sc.nextInt();
//    d=sc.nextInt();
//    e=sc.nextInt();
//    f=sc.nextInt();
//    
//    a*=d; b*=d; c*=d; //x+3y=-1
//    d*=a; e*=a; f*=a; //4x+y=7   4x+12y=14 
////    ans1=(b+e)/(c+f);
//    if(a+d==0)
//    {
//    	
//    }
    
    //    System.out.println("|\\_/|");
//    System.out.println("|q p|   /}");
//    System.out.println("( 0 )\"\"\"\\");
//    System.out.println("|\"^\"`    |");
//    System.out.println("||_/=\\\\__|");
//    
//    int N,answer=1;
//    N=sc.nextInt();
//    if(N==0)
//    {
//    	System.out.println(1);
//    	return;
//    }
//    for(int i=1; i<=N; i++)
//    {
//      answer*=i;
//    }
//    System.out.println(answer);
//  }
 }
}