<?php

$handle = fopen ("php://stdin", "r");
function solve($n, $s, $d, $m){
    // Complete this function
   $ways=0;
    for($i=1;$i<=count($s);++$i){
        $sum=0;
        $footsteps=0;
        for($j=$i;$j<=count($s);++$j){
            ++$footsteps;
            $sum+=$s[$j-1];
            if($footsteps==$m){
                if($sum==$d){
                    ++$ways;
                }
            }
            
        }
    }
    return $ways;
    
}

fscanf($handle, "%d",$n);
$s_temp = fgets($handle);
$s = explode(" ",$s_temp);
$s = array_map('intval', $s);
fscanf($handle, "%d %d", $d, $m);
$result = solve($n, $s, $d, $m);
echo $result . "\n";

?>
