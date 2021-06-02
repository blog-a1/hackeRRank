import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        String [] words = {};
      if( s != null && !s.trim().isEmpty() && s.length() < 400000) {
          words = s.trim().split("[ !,?.\\_'@]+");
      }
      System.out.println(words.length);
      for( String word : words ) {
          System.out.println(word);
      }
        scan.close();
    }
}

