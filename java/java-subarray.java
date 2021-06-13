import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static Scanner sc=new Scanner(System.in);
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int n=sc.nextInt();int c=0;
        int a[]=new int[n];
        for(int i=0;i<n;i++)    a[i]=sc.nextInt();sc.close();
        for(int j=0;j<n;j++)
        {   int s=0;
            for(int k=j;k<n;k++)
            {
                s+=a[k];
                if(s<0) c++;
            }
        }System.out.println(c);
    }
}
