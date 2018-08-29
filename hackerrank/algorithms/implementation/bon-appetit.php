<?php

// Complete the bonAppetit function below.
#https://www.hackerrank.com/challenges/bon-appetit/problem

function bonAppetit($bill, $k, $b) {
     $tbd = (array_sum($bill)-$bill[$k])/2;
    
    if($tbd==$b){
        echo 'Bon Appetit';
    }
    else{
        echo $b-$tbd;
    }

}

?>