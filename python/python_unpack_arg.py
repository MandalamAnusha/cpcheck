#!/usr/bin/python

#unpacking the list arguments
def fun(a,b,c):
 print(a,b,c),'\n'

list =[2, 3, 4]
fun(*list)

#unpacking the tuple arguments
def method(a, b, c, d):
 print(a, b, c,d),'\n'

tup = (10, 30, 70)
method(40, *tup)


#unpacking the dictionary arguments
def function(r, t, y,u):
 print(r, t, y, u),'\n'

#list = [10, 20]
#tup = (3, 4)
dict = {10:20,'name':'anu'}
#function(*list, *tup, *dict)

function(30,40, *dict)
