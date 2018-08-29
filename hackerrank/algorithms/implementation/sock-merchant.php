<?php

// Complete the sockMerchant function below.
# https://www.hackerrank.com/challenges/sock-merchant/problem
function sockMerchant($n, $ar) {
 $values = array_count_values($ar);
 $pairs = 0;
    foreach($values as $val){
     $pairs += intdiv($val,2);
    }
    return $pairs;   
}


?>
