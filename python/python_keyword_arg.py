#!/usr/bin/python


#python keyword arguments
def fun(a, b):
 print"a,b",(a,b),'\n'
 print"b,a",(b,a),'\n'
 print"a,a",(a, a),'\n'
 print"b,b",(b, b),'\n'
 
fun(b = 20, a = 5)
 

#case 2:
def fun1(b,a = 3):
 print"b,a",(b,a),'\n'

# fun(a=20,b) error: nonkeyword arguments cannot follow keyword arguments
fun1( a ='anu' , b = 4)
