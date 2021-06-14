import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        ArrayList<ArrayList<Integer>>lists=new ArrayList<>();
        for(int i=0;i<n;i++)
        {
            int a=sc.nextInt();
            ArrayList<Integer>list=new ArrayList<>();
            for(int j=0;j<a;j++)
            {
                list.add(sc.nextInt());
            }lists.add(list);
        }
        int b=sc.nextInt();
        for(int i=0;i<b;i++)
        {
            int x=sc.nextInt();int y=sc.nextInt();
            ArrayList<Integer>list=lists.get(x-1);
            if(y<=list.size())  System.out.println(list.get(y-1));
            else    System.out.println("ERROR!");
        }
    }
}
