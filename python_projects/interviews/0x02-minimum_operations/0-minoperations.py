#!/usr/bin/python3
'''Minimum Operations python3 challenge'''

def minOperations(n):
	'''calculates the fewest number of
    	operations needed to result in exactly n H
    	characters in this file.
    	Returns:
        	Integer : if n is impossible to achieve, return 0
    	'''
	rep = 0 #number of repetitions
	if (n == 0) or (n < 0):
		return rep
	else:
		rep = n ** 0.5 #reps increase exponentially
		if ((rep ** 2) == n):
			rep = int(rep)
			return (rep * 2) #return for perfect squares
		else:
			rep = int(rep)
			#add 1 for imperfect squares 
			return ((rep * 2) + 1)
