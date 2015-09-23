#!/usr/bin/python2
import sys
sys.path.append("/home/user/src/yast/PyGram")
import tree, PyGram

def newTree(path):
	nodes = {}
	I = open(path)
	s = I.readlines()
	for row in s:
		ele = row.split()
		nodes[int(ele[0])] = tree.Node(ele[1])

	thisNode = None

	for row in s:
		ele = row.split()
		thisNode = nodes[int(ele[0])]
		for i in ele[3:]:
			thisNode.addkid(nodes[int(i)])

	return PyGram.Profile(thisNode)

if (len(sys.argv)!=3):
	sys.stderr.write("USAGE: simtest TREE1 TREE2\n")
	exit(1)

A = newTree(sys.argv[1])
B = newTree(sys.argv[2])
print A.edit_distance(B)

