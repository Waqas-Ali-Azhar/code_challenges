<?php

$handle = fopen ("php://stdin", "r");
function migratoryBirds($n, $ar) {
    // Complete this function
    //** asked some things in modifications
    $maxCount = 0;
    $k=0;
    $element = null;
    $a = array();
    for($i=0;$i<$n;++$i)
    {
        $count = 0;
        
        for($j=0;$j<$n;++$j){
            if($ar[$j]==$ar[$i]){
                
                ++$count;
                $element = $ar[$j];
            }
        }
        if($count==$maxCount){
             if($element<$a[$k]){
                $a[$k] = $element;
            }
        }
        elseif($count>$maxCount){
            $maxCount = $count;
            $a[$k]=$element;
        }
        
    }
    
    return $a[$k];
}

fscanf($handle, "%i",$n);
$ar_temp = fgets($handle);
$ar = explode(" ",$ar_temp);
$ar = array_map('intval', $ar);
$result = migratoryBirds($n, $ar);
echo $result . "\n";

?>
