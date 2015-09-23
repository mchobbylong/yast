#!/usr/bin/python2
import sys, re

addGLR = True

s = sys.stdin.read()
s = s.split("%%")

s[1] = s[1].replace("\n"," ")
comments = re.findall("/\*.*?\*/",s[1])
for com in comments:
	#sys.stderr.write(com+'\n')
	s[1] = s[1].replace(com," ")

print s[0]

if (addGLR): print "%glr-parser"

print "%%"

stats = re.split(";\s",s[1])
for stat in stats:
	obj = re.split(":\s",stat)
	if (len(obj)==1): continue
	sbj = re.split("\|\s",obj[1])
	obj = obj[0]
	print obj, ":"
	ccnt = 0
	for condition in sbj:
		elements = condition.split()
		print "\t",
		if (ccnt): print '|',
		print condition,
		ccnt = ccnt + 1
		if (addGLR):
			print "%dprec", ccnt
		else:
			print
		#if (not elements):
		#	print "{ $$=0; }"
		#	continue
		out1 = "{ $$=++cnt; printf(\"%d " + obj + " " + str(len(elements))
		out2 = "cnt"
		extra = ""
		ecnt = 0
		delta = 0
		for ele in elements:
			ecnt = ecnt + 1
			out1 = out1 + " %d"
			if (ele.isupper() or ele[0]=='\''):
				delta = delta + 1
				out2 = out2 + ",tok-" + str(delta)
				extra = extra + "printf(\"%d " + ele + " 0\\n\",tok-" + str(delta) + ");"
			else:
				out2 = out2 + ",$" + str(ecnt)
		out1 = out1 + "\\n\","
		out2 = out2 + "); " + extra + " tok-=" + str(delta) + "; }"
		print "\t" + out1 + out2
	print '\t;'
	print

print "%%"
print s[2]
