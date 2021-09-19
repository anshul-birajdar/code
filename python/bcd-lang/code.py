def exec(lines):
	#lines=lines[:-1]
	print(lines)
def convert(lines):
	for i in range(0,len(lines)):
		for j in range(0,len(lines[i])):
			try:
				lines[i][j]=float(lines[i][j])
			except:
				pass
	print(lines)
	return lines
			
def main():
	lines = []
	while True:
		line=input()
		if(line=="run"):
			exec(lines)
		else:
			splitted=lines.split()
			if(len(splitted)>0):
				lines.append(splitted)
			lines=convert(lines)
if(__name__=="__main__"):
	main()
	
		

