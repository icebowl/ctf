import sys
print ("This is the name of the script: ", sys.argv[0])
print ("Number of arguments: ", len(sys.argv))
print ("The arguments are: " , str(sys.argv))

total_argv = len(sys.argv)

for n in range (1,total_argv):
	print(sys.argv[n])
