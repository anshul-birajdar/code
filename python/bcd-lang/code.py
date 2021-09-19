import sys
memsize=100
acc=0
mem=[0]*memsize
def exec(lines):
	global acc,mem,memsize
	if(1):
		for line in lines:
			c=line[0]
			if c=="add":acc+=lines[1][0]
			if c=="print":print(acc)
	if(0):
		print("ERROR")
		sys.exit()
				
		
def convert(lines):
	for i in range(0,len(lines)):
		for j in range(0,len(lines[i])):
			try:
				lines[i][j]=float(lines[i][j])
			except:
				pass
	#print(lines)
	return lines
			
def main():
	lines = []
	while True:
		line=input()
		if(line=="run"):
			exec(lines)
		else:
			splitted=line.split()
			if(len(splitted)>0):
				lines.append(splitted)
			lines=convert(lines)
if(__name__=="__main__"):
	main()
	
		

