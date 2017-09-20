<?php

    
    
$handle = fopen ("php://stdin","r");
fscanf($handle,"%d %d",$s,$t);
fscanf($handle,"%d %d",$a,$b);
fscanf($handle,"%d %d",$m,$n);
$apple_temp = fgets($handle);
$apple = explode(" ",$apple_temp);
array_walk($apple,'intval');
$orange_temp = fgets($handle);
$orange = explode(" ",$orange_temp);
array_walk($orange,'intval');

function getApplesAndOranges($apple_temp,$apples,$orange_temp,$oranges,$s,$t,$a,$b){
    $app = 0;
    $orng = 0;
    $count = max(count($apples),count($oranges));
    for($i=0;$i<$count;++$i){
        if(!empty($apples[$i])){
          if(($a+$apples[$i] >=$s and $a+$apples[$i] <$t ) || ($a+$apples[$i] <=$t and $a+$apples[$i] >$s )              ){
            
            ++$app;
           }
        }
        if( !(empty($oranges[$i]))){
             if(($b+$oranges[$i] >=$s and $b+$oranges[$i] <$t ) || ($b+$oranges[$i] <=$t and $b+$oranges[$i]                >$s )){
                
                

            ++$orng;
        }
    }
        
    }
    
    return array($app,$orng);
    
}
$arr=getApplesAndOranges($apple_temp,$apple,$orange_temp,$orange,$s,$t,$a,$b);
echo $arr[0];
echo "\n";
echo $arr[1];



?>
