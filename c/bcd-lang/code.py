acc=0;
while True:
	val=input(">");
	tokens=val.split()
	t=tokens[0]
	if t=="print":print(acc)
	if t=="store":acc=int(tokens[1])
	if t=="add":acc+=int(tokens[1])
	if ":" in t:print(t[:-1])


