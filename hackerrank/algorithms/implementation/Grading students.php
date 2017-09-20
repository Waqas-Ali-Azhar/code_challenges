<?php

$handle = fopen ("php://stdin", "r");
function solve($grades){
    $gradesRounded=array();
    foreach($grades as $key => $value){
        if($value<38){
            $gradesRounded[$key]=$value;
        }
        elseif($value>=38){
            $rem = $value%5;
            if($rem>=3){
             $gradesRounded[$key]=(5-$rem)+$value;    
            }
            else{
                $gradesRounded[$key]=$value;
            }
        }
    }
    return $gradesRounded;
}

fscanf($handle, "%d",$n);
$grades = array();
for($grades_i = 0; $grades_i < $n; $grades_i++){
   fscanf($handle,"%d",$grades[]);
}
$result = solve($grades);
echo implode("\n", $result)."\n";



?>
