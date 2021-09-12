acc=0;
lines={}
def exec(command):
	global acc,lines
	tokens=val.split()
	t=tokens[0]
	if t=="do":pass
	if t=="print":print(acc)
	if t=="store":acc=int(tokens[1])
	if t=="add":acc+=int(tokens[1])
	if t[-1]==":":lines[t[:-1]]=tokens[1] # 1:
	if t=="run" and t!=[]:
		tokens=tokens[1:]
		print(tokens)
		for line in lines:
			exec(lines[line])
while True:
	val=input(">");
	exec(val);
	print(lines,type(lines))	
		

