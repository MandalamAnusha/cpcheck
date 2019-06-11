#!/usr/bin/python

# function with no arguments and no return value
def fun():
 print "empty function for testing"

fun()

#function with arguments and no return value
def fun(a, b):
 print (a+b)

fun(10, 20)

#function with no arguments and return value
def fun(a = 10 ,b = 10 ):
 return a+b

print (fun())

def fun():
 return 'how are you'

str = fun()
print "printing the string: ", str

#function with arguments and return value
def fun(a, b, c  ):
 return (a+b+c)

print "fun with arguments: ", (fun(10, 20, 11)) 







# python  function with default arguments
def fun(a = 1, b = 55, c = 2):
 print "adding the default arguments: ", (a+b+c)

fun()



