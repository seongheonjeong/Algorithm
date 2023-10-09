import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        HashMap<String,Double> map=new HashMap<String, Double>();
        map.put("A+",4.5);  map.put("A0",4.0);  map.put("B+",3.5);
        map.put("B0",3.0);  map.put("C+",2.5);  map.put("C0",2.0);
        map.put("D+",1.5);  map.put("D0",1.0);  map.put("F",0.0);


        double answer= 0;
        double sum=0;
        for(int i=0; i<20; i++)
        {
            String subjectName=sc.next();
            double credit=sc.nextDouble();
            String grade=sc.next();
            if(!(grade.equals("P")))
            {
                answer+=credit*map.get(grade);
                sum+=credit;
            }

        }
        System.out.println(answer/sum);
        sc.close();
    }
}
