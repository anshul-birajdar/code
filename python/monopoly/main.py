import random
with open("/usr/share/dict/words") as f:
	wordlist = []
	for line in f:
		wordlist.append(line.strip())
name=random.choice(wordlist)
while len(name)>6 and name.lower()!=name:
	name=random.choice(wordlist)
print(name)
	

