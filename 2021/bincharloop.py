import sys
'''
print ("This is the name of the script: ", sys.argv[0])
print ("Number of arguments: ", len(sys.argv))
print ("The arguments are: " , str(sys.argv))
'''
total_argv = len(sys.argv)

temp =""
i = 0
for n in range (1,total_argv):
	print(sys.argv[n])
	#temp = temp + sys.argv[n]
	temp = temp + chr(int(str(sys.argv[n]),2))
	#charlist[i] = str(n)

print(temp)
'''
a = chr(int('01110011',2))
'''
