#!/usr/bin/python

class Test:
	
	'''def __init__(self, x, y):
		self.x = x
		self.y = y'''
	'''def __init__(self):
		self.x = 66
		self.y = 88'''
	def __init__(self):
		self.x = 6
		self.y = 9
	def _del_(self):
		#self.x
		#self.y
		print'destructor'


obj = Test()
#obj = Test(10, 4)


#print (format(obj.x))

print (obj.x)
#del obj
print (obj.y)
