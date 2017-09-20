<?php

$handle = fopen ("php://stdin", "r");
function kangaroo($x1, $v1, $x2, $v2) {
    // Complete this function
    
    if($x2>$x1 and $v2>$v1){
        print_r('NO');
    }
    elseif($v2==$v1){
        print_r('NO');
    }
    elseif(($x2-$x1)%($v2-$v1)==0){
        print_r('YES');
    }else{
        print_r('NO');
    }    
}

fscanf($handle, "%i %i %i %i", $x1, $v1, $x2, $v2);
kangaroo($x1, $v1, $x2, $v2);


?>
