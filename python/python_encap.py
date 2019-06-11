#!/usr/bin/python


class Test:
	a  = 10;
	__b = 20;
	
	def __init__(self):
		print(self.a)
		print(self.__b)
	def fun(self):
		print"empty function"
		self.__encap()

	def __encap(self):
		a = 11
		__b = 22

		print a, __b
obj = Test()
obj.fun()

#obj.__encap()
