#!/bin/python3

import os
import sys

#
# Complete the timeConversion function below.
#
def timeConversion(s):
    
    time = s.split(":")
    if s[-2:] == "PM":
        if time[0] != "12":
            time[0] = str(int(time[0]) +12)
    else:
        if time[0] == "12":
            time[0] = "00"

    rtime = ":".join(time)
    return str(rtime[:-2])        

    # Write your code here.
    #

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    f.write(result + '\n')

    f.close()
