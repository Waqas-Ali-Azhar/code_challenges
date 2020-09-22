#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'countStrings' function below.
#
# The function is expected to return an INTEGER.
# The function accepts STRING s as parameter.
#

def countStrings(s):
    # mylist = []
    if(not len(s)): 
        return 0
    temp_str = ''
    str_length = len(s)
    sameCount = 0
    count = 0;
    for key,letter in enumerate(s):
        temp = key
        while(count < str_length):
            temp_str += s[temp]
            temp = temp + 1
            count = count + 1
            if temp == str_length:
                temp = 0
        if(temp_str[0] == temp_str[len(temp_str)-1]):
            sameCount = sameCount + 1
        # mylist.append(temp_str)
        count = 0
        temp_str = ''
    return sameCount    

        
    

if __name__ == '__main__':