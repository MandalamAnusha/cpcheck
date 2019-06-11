#!/usr/bin/python

'''class A:
	b = 10
	__a = 6

	def fun(Self, x, y):
	#	print"addition: ",(__a+b)
	#	return (b+__a)
	#	print"a: ",self. __a
	#	print "__b: ",self.b
	
		print"addition: ",(x+y)
		
	
o = A()
o.fun(2, 5)
print"a: ",o.__class__.b
#print"a: ",o.__class__.__a

'''

class Crow:
	variaties = 'bird'
	def __init__(self):
		print"normal constructor"
		self.x =10
		self.y = 20
		print"self.x",self.x
		print"self.y",self.y
	def fly(self):
		print"crow can fly"
	
	def swim(self):
		print"crow cannot swim"
	

class Penguin:
	
	def fly(self):
		print"penguin cannot fly"
	def swim(self):
		print"penguin can swim"

def swim_test(birds):
	birds.swim()

pen = Penguin()
cro = Crow()

swim_test(pen);

#print"class mem: ",(cro.__class__.variaties)
print"class mem: ",cro.variaties










