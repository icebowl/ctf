#!/usr/env python3
#python3

listchr = ['c','v','p','b','P','G','S','{','a','b','g','_','g','b','b','_','o','n','q','_','b','s','_','n','_','c','e','b','o','y','r','z','}']

liststr = "* "
print (listchr)
for n in range (0,len(listchr)):
 #print(listchr[n],end="")
 #i = chr(ord(listchr[n])+13)
 i = ord(listchr[n])
 print (i," ",end="")
print(liststr)

