<?php

// Complete the migratoryBirds function below.
function migratoryBirds($arr) {
    $birds = array();
    $sortedKeys = array();
    $max = 0;
    for($i=0;$i<count($arr);++$i){
        $birds[$arr[$i]] = (!empty($birds[$arr[$i]]) ? $birds[$arr[$i]] : 0 ) + 1;
    }
    $max = max($birds);
    foreach($birds as $key => $val){
        if($max==$val) array_push($sortedKeys,$key);    
    }
    
    sort($sortedKeys);
    
   return $sortedKeys[0];
}

$fptr = fopen(getenv("OUTPUT_PATH"), "w");

$arr_count = intval(trim(fgets(STDIN)));

$arr_temp = rtrim(fgets(STDIN));

$arr = array_map('intval', preg_split('/ /', $arr_temp, -1, PREG_SPLIT_NO_EMPTY));

$result = migratoryBirds($arr);

fwrite($fptr, $result . "\n");

fclose($fptr);
?>