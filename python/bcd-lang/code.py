def exec(lines):print(lines)

def main():
	lines = []
	while True:
		line=input()
		if(line=="run"):exec(lines)
		else:
			lines.append(line.split())
if(__name__=="__main__"):
	main()
	
		

