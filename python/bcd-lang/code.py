def exec(lines):print(lines)
def convert(lines):
	for i in range(0,len(lines)-1):
		print(i)
		for j in range(0,len(lines[i])-1):
			#try:
			lines[i][j]=float(lines[i][j])
			print("---LINES---",lines[i],lines[i][j])
			#except:
			#	pass
	print(lines)
	return lines
			
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
	
		

