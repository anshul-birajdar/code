def exec(lines):
	lines=lines[:-1]
def convert(lines):
	for i in range(0,len(lines)):
		for j in range(0,len(lines[i])):
			try:
				lines[i][j]=float(lines[i][j])
			except:
				pass
	return lines
	print(lines)
			
def main():
	lines = []
	while True:
		line=input()
		if(line=="run"):
			lines=convert(lines)
			exec(lines)
		else:
			lines.append(line.split())
			lines=convert(lines)
if(__name__=="__main__"):
	main()
	
		

