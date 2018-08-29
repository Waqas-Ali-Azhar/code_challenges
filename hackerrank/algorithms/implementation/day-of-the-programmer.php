<?php

// Complete the dayOfProgrammer function below.
# https://www.hackerrank.com/challenges/day-of-the-programmer
function dayOfProgrammer($year) {
    
    
    if($year>1918){
        if($year%400==0 || ($year%4==0 && $year%100!=0)){
            $day = 256-244;
            
           return $day.'.09.'.$year;
        }
        else{
            $day = 256-243;
           return $day.'.09.'.$year;
            
        }
    }
    elseif($year<1918){
        if($year%4==0){
            $day = 256-244;
            
           return $day.'.09.'.$year;
            
        }
        else{
            $day = 256-243;
           return $day.'.09.'.$year;
            
        }
    }
    elseif($year==1918){
        $day = 256-230;
            
         return $day.'.09.'.$year;
    }


}

?>