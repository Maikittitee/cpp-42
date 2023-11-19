#!/usr/local/bin/python3
import sys


def makeHPP(class_name):
	all_upper = "".join(list(i.upper() for i in class_name))
	file = open(class_name + ".hpp", "w")
	s0 = "#ifndef "+all_upper+'_HPP\n# define '+all_upper+"_HPP\n"
	s1 = "# include <iostream>\n# include <string>\n\n"
	s2 = "class "+class_name+'{\n\tpublic:\n\t\t'+class_name+"( void );\n\t\t~"+class_name+"( void );\n\n\tprivate:\n};" 
	file.write(s0)
	file.write(s1)
	file.write(s2)
	file.write("\n\n#endif")
	

if __name__ == "__main__":
	argc = len(sys.argv)
	classes = sys.argv[1:]
	for class_name in classes:
		makeHPP(class_name)
		# makeCPP(class_name)
