import java.util.*;

public class diagonal_difference {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int RowCounter=sc.nextInt();
        int firstDiagonal=0;
        int secondDiagonal=0;
        int sum;
        for (int y=0;y<RowCounter;y++){
            for(int x=0;x<RowCounter;x++){
                int number=sc.nextInt();
                if(x==y){
                 //just add first diagonal when x and y are equal
                 firstDiagonal+=number;   
                }
                if(x+y==RowCounter-1){
                //just add second diagonal when x and y make 2
                 secondDiagonal+=number;
                }
            }
        }
        //bigger subtracts smaller no need of absolute function
        if(firstDiagonal>secondDiagonal){
         sum=firstDiagonal-secondDiagonal;   
        }
        else{
           sum=secondDiagonal-firstDiagonal;
        }
        System.out.println(sum);
    }
}