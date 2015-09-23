#!/usr/bin/python2
import sys, os

if (len(sys.argv)!=3):
	sys.stderr.write("USAGE: simtest TREE1 TREE2\n")
	exit(1)

os.system("./pascal/pascal < "+sys.argv[1]+" > .ast1.res")
os.system("./pascal/pascal < "+sys.argv[2]+" > .ast2.res")
os.system("./simtest.py .ast1.res .ast2.res")
os.system("rm .ast1.res .ast2.res")
