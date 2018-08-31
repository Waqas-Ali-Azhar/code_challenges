<?php

/*
 * Complete the pageCount function below.
 */

# https://www.hackerrank.com/challenges/drawing-book/problem

function pageCount($n, $p) {
    /*
     * Write your code here.
     */
    if($n%2==0){
        $n=$n+1;
    }
    if($n-$p >= 2){
        if(intdiv($n,2)<$p){
            return intdiv($n-$p,2);
        }
        elseif(intdiv($n,2)>$p){
            return intdiv($p,2);
        }
        elseif(intdiv($n,2)==$p){
            return intdiv($p,2);
        }
    }
    else{
        return 0;
    }
  
    

}