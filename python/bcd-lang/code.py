import sys
memsize=100
acc=0
mem=[0]*memsize
def exec(lines):
	global acc,mem,memsize
	if(1):
		#for i in range(0,len(lines)):
		i=-1
		while(i<len(lines)-1):
			#print("i=",i);
			i+=1
			line=lines[i]
			c=line[0]
			if c=="add":acc+=float(line[1])
			if c=="print":print(acc)
			if c=="load":acc=mem[int(line[1])]
			if c=="ldi":acc=float(line[1])
			if c=="store":mem[int(line[1])]=acc
			if c=="jlt":
				if(acc<float(line[1])):
					i=int(line[2]-1)
			if c=="jgt":
				if(acc>float(line[1])):
					i=int(line[2]-1)
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
	lineno=0
	lines = []
	while True:
		line=input("["+str(lineno)+"]>")
		lineno+=1
		if(line=="run"):
			exec(lines)
		else:
			splitted=line.split()
			if(len(splitted)>0):
				lines.append(splitted)
			lines=convert(lines)
if(__name__=="__main__"):
	main()
	
		

