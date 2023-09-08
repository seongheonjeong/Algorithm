// class Solution {
//         public int gcd(int n1,int n2)
//         {
//             int gcd1=1;
//             int min=(n1>n2)?n2:n1;
            
//              for(int i=1; i<=min; i++)
//              {
//                  if(n1%i==0&&n2%i==0)
//                          gcd1=i;     
//             }
//             return gcd1;
//         }
        
    
//     public int[] solution(int numer1, int denom1, int numer2, int denom2) {
        
    
//         int[] answer = new int[2];
//         int x= numer1*denom2+numer2*denom1;
//         int y= denom1*denom2;
//         int gcd1=gcd(denom1,denom2);
//          x/=gcd1;
//          y/=gcd1;
//          answer[0]=x;
//          answer[1]=y;
        
//         return answer;
//     }
// }





class Solution {
    public int[] solution(int denum1, int num1, int denum2, int num2) {
        int[] answer = new int[2];

        answer[0]=denum1*num2+denum2*num1;
        answer[1]=num1*num2;
        int min = Math.min(answer[0],answer[1]);
        int max = 1;
        for(int i=1; i<=min; i++){
            if(answer[0]%i==0 && answer[1]%i==0){
                max= i;
            }
        }
        answer[0] /= max;
        answer[1] /= max;
        return answer;
    }
}