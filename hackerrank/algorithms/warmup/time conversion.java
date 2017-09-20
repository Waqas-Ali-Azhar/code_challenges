import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        char h1 = 0,h2 = 0,m1 = 0,m2 = 0,s1 = 0,s2 = 0,time1 = 0,coln;
        int t1=0,t2=0;
        int time=0;
        boolean h=true;
        boolean m=false;
        boolean s=false;
        Scanner sc=new Scanner(System.in);
        String line=sc.nextLine();
        h1=line.charAt(0);
        h2=line.charAt(1);
        t1=Character.getNumericValue(h1);
        t2=Character.getNumericValue(h2);
        m1=line.charAt(3);
        m2=line.charAt(4);
        s1=line.charAt(6);
        s2=line.charAt(7);
        time1=line.charAt(8);
        time=t1*10+t2;
        if(time<12&&time1=='P'){
        t1=(t1+1)+48;
        t2=t2+2+48;
        h1=(char)t1;
        h2=(char)t2;
        }
        if(time==12&&time1=='A'){
            h1='0';
            h2='0';
        }
        System.out.println(""+h1+h2+":"+m1+m2+":"+s1+s2);
        
    }
}