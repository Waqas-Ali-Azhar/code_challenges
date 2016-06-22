import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        int number=0;
        Scanner sc=new Scanner(System.in);
        int Length=sc.nextInt();
        double positive=0;
        double negative=0;
        double zero=0;
        for (int x=0;x<Length;x++){
        number=sc.nextInt();
            if(number>0){
                positive++;
             }
                
            else if(number<0)
                negative++;
            else if(number==0)
                zero++;
        }
         positive=(positive/Length);
        negative=(negative/Length);
        zero=(zero/Length);
        System.out.println(positive);
        System.out.println(negative);
        System.out.println(zero);
        
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
    }
}