#!/usr/bin/python

#break

for letter in 'word':
	if(letter == 'r'):
  		break
 	print'letter: ',letter

#continue

for letter in 'word':
	if(letter == 'r'):
		continue
	print 'letter:\t', letter

#pass

for letter in 'word':
	if(letter == 'r'):
		pass
	print 'letter:\t', letter
