import random
with open("/usr/share/dict/words") as f:
	wordlist = []
	for line in f:
		wordlist.append(line.strip())
print(random.choice(wordlist))

