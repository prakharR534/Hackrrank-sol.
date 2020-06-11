#!/bin/python3

import math
import os
import random
import re
import sys


class Car:
    def __init__(self,max_speed,speed_unit):  
        self.max_speed = max_speed;  
        self.speed_unit = speed_unit;
    def __repr__(self):
        return "Car with the maximum speed of " + str(self.max_speed) +" "+  str(self.speed_unit)

    

class Boat:
    def __init__(self,max_speed):  
        self.max_speed = max_speed;  
            
    def __repr__(self):
        return "Boat with the maximum speed of " + str(self.max_speed) +" knots"


if __name__ == '__main__':
