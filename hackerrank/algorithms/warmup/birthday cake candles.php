<?php

$handle = fopen ("php://stdin", "r");
function birthdayCakeCandles($n, $ar) {
    rsort($ar);
    $max=$ar[0];
    $counts = array_count_values($ar);
    return $counts[$max];
}

fscanf($handle, "%i",$n);
$ar_temp = fgets($handle);
$ar = explode(" ",$ar_temp);
$ar = array_map('intval', $ar);
$result = birthdayCakeCandles($n, $ar);
echo $result . "\n";

?>
