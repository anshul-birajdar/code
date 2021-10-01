import random
with open("/usr/share/dict/cracklib-small") as f:
	wordlist = []
	for line in f:
		wordlist.append(line.strip())
name=random.choice(wordlist)
print(name)
while len(name)>10 or name.lower()!=name or len(name)<6:
	name=random.choice(wordlist)
namec=[char for char in name]
gname=namec
for i in range(0,len(namec)):
	if namec[i] not in "aeiou":
		namec[i]='_'
turns=0
while ''.join(namec) != name and turns<100:
	turns+=1
	print(''.join(namec))
	char=input(">");
	char=char[0]
	for i in range(0,len(gname)):
		if gname[i]==char:
			namec[i]=char
		
	
		

