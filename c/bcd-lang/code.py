acc=0;
while True:
	val=input(">");
	tokens=split(val);
	t=tokens[0]
	if t=="print":print(acc)
	if t=="store":acc=int(tokens[1])
	if t=="add":acc+=int(tokens[1])

