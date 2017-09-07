#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Aug 18 09:33:14 2017

@author: ZerWinner
"""
import math

def numofdigits(n):
    return int(math.log10(n))+1
n0 = 1
n1 = 1
nxt = n0 + n1
ctr = 3 # nxt = 2 means index = 3
while numofdigits(nxt) != 1000:    
    n0 = n1
    n1 = nxt
    nxt = n0 + n1
    ctr += 1
print(ctr)