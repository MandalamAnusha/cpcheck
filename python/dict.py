#!/usr/bin/python

a = {'name':'anu', 'age':25, 'dep':'ess'}
print a

print a['name']

a['name'] = 'anusha'
print a

print a.keys()
print a.items()
print a.values()

del a['name']
print a

a.clear();
print a

del a


b = {'name':'anu', 'age':25, 'dep':'ess', 'name':'savi'}
print b

