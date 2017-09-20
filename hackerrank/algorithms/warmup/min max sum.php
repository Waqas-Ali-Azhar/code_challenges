<?php

$handle = fopen ("php://stdin", "r");
$arr_temp = fgets($handle);
$arr = explode(" ",$arr_temp);
$res=array();
$j=0;
foreach($arr as $value){
    $res[$j]=0;
    for($i=0;$i<count($arr);++$i){
        if($j==$i){
            continue;
        }
        else{
            $res[$j]+=$arr[$i];
        }
    }
    ++$j;
}
$ar=sort($res);

sort($res);
$min=$res[0];
rsort($res);
$max=$res[0];

echo $min.' '.$max;

?>
