import java.math.BigDecimal;
import java.util.*;
class Solution{

    public static void main(String []args){
        //Input
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        String []s=new String[n+2];
        for(int i=0;i<n;i++){
            s[i]=sc.next();
        }
      	sc.close();
        Comparator<String>c=new Comparator<String>()
        {
            public int compare(String s1,String s2)
            {
                BigDecimal a=new BigDecimal(s1);
                BigDecimal b=new BigDecimal(s2);
                return b.compareTo(a);
            }
        };
        Arrays.sort(s,0,n,c);

        //Output
        for(int i=0;i<n;i++)
        {
            System.out.println(s[i]);
        }
    }

}
