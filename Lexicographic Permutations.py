#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Aug 17 21:50:27 2017

@author: ZerWinner
"""

import itertools as iter
n = '0123456789'
print(''.join(list(iter.permutations(n))[999999]))