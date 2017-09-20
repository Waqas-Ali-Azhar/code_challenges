import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int length=sc.nextInt();
         String[][] result;
        boolean f=false;
        int base=0;
        result = new String[length][length];
        if(length>0){
            for(int x=0;x<length;x++){
                f=false;
                base++;
                for(int y=0;y<length;y++){
                   if(y==length-base||f==true){
                     f=true;
                   result[x][y]="#";
                   }
                   else{
                       result[x][y]=" ";
                   }
                }
            }
        }
                 for(int x=0;x<length;x++){
                    for(int y=0;y<length;y++){
                        System.out.print(result[x][y]);
                    } 
                    System.out.println();
                }
       
        
    }
}