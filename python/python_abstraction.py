#!/usr/bin/python

class Test:
	a = 10
	b = 20
	__c = 30

	"""def abstrc(self,x, y,z):
		self.a = x
		self.b = y
		self.__c = z
		print"a: ", self.a,'b: ',self.b
		print(self.__c) """
	def fun(self, x, y):
		a = x;
		b = y;
		print"a: ", a,'b: ',b
	

obj = Test()
#obj.abstrc(1, 2, 5)
obj.fun(10, 20)
#print"class members:a ", (obj.a)
#print"class member:b ", (obj.b)
#print"__c: ",(obj.__c)
