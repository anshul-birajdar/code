import random
with open("/usr/share/dict/cracklib-small") as f:
	wordlist = []
	for line in f:
		wordlist.append(line.strip())
name=random.choice(wordlist)
while len(name)>10 or name.lower()!=name or len(name)<6:
	name=random.choice(wordlist)
print(name)
	

