import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        List<Integer>list=new ArrayList<Integer>();
        int n=sc.nextInt();
        for(int i=0;i<n;i++)    list.add(sc.nextInt());
        int a=sc.nextInt();
        for(int j=0;j<a;j++)
        {
            String b=sc.next();
            if(b.compareTo("Insert")==0)
            {
                int c=sc.nextInt();int d=sc.nextInt();list.add(c,d);
            }
            else
            {
                int e=sc.nextInt();list.remove(e);
            }
        }for(int k=0;k<list.size();k++) System.out.print(list.get(k)+" ");
    }
}
