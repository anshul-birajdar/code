def exec(lines):print(lines)
def convert(lines):
	for i in range(0,len(lines)-1):
		for j in range(0,len(lines[i])-1):
			try:
				lines[i][j]=float(lines[i][j])
			except:
				pass
			
def main():
	lines = []
	while True:
		line=input()
		if(line=="run"):exec(lines)
		else:
			lines.append(line.split())
			lines=convert(lines)
if(__name__=="__main__"):
	main()
	
		

