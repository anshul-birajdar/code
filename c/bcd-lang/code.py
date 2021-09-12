acc=0;
while True:
	lines={}
	val=input(">");
	tokens=val.split()
	t=tokens[0]
	if t=="print":print(acc)
	if t=="store":acc=int(tokens[1])
	if t=="add":acc+=int(tokens[1])
	if t[-1]==":":lines[t[:-1]]=tokens[1:]
	print(lines,type(lines))	
		

