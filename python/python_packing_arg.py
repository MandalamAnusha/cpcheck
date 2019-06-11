#!/usr/bin/python


#packing arguments

def function(*k):
 print(k)

function(1, 2, "anu", 23.45)

#packing the list arguments
def met(*m):
 print"printing the list: ",m,'\n'

list = [10, 20, 'anu', 23.45, 34.56]
list2 = [2, 3, "savi",34.45, 78]
met(list, list2, 2, 4, 5) 

#packing the tuple arguments
def fun(*t):
 print"printing the tuple: ",t,'\n'

tup = (1, 23, 45.56, 'savi')
fun(tup)

#packing the dictonary arguments
def funct(*d):
 print"printing the dict: ", d, '\n'

list = [1, 2, 3]
tup = (3, 4, 5)
dict = {10:20,'name':'anu',23.45:56.78}
funct(dict, list, tup, 56,78)
