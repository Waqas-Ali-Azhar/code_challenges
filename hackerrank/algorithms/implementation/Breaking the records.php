<?php

$handle = fopen ("php://stdin", "r");
function getRecord($s){
    // Complete this function
    $max=$s[0];
    $min=$s[0];
    $i=0;$d=0;
    foreach($s as $points){
        if($points==$s[0]) continue;
        if($points>$max){
            ++$i;
            $max=$points;
        }
        if($points<$min){
            ++$d;
            $min=$points;
        }
    }
    return array($i,$d);
}


fscanf($handle,"%d",$n);
$s_temp = fgets($handle);
$s = explode(" ",$s_temp);
$s = array_map('intval', $s);
$result = getRecord($s);
echo implode(" ", $result)."\n";

?>
