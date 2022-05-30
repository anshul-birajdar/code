import sys
import os
import re
print("Welcome To The Game Of Bulls And Cows\nsecret=____\nbull=correct place and no\ncow=corr no only\nEnter the Secret Number");
os.system("stty -echo");Secret=input("");tries=0;print("\nFormat:bull,cow");
while(1):
	try:	
		bull=0;cow=0;listed=[];
		Guess=input(">");
		if(Guess.lower()=='e' or Guess.lower()=='exit'):
			os.system("stty echo");print("\n");sys.exit();
		if(len(Guess)!= 4):raise IndexError("No len should be four");
		if(re.findall("[a-zA-Z]",Guess)):raise Exception("Enter nums only");
		for i in range(0,4):
			if(Guess[i]==Secret[i] and Guess[i] not in listed):
				bull+=1
				listed.append(Guess[i])
		for i in range(0,4):
			for j in range(0,4):
				if(Guess[i]==Secret[j] and Guess[i] not in listed):
					listed.append(Guess[i])
					cow+=1;
		print("\n",Guess,",bull=",bull,",cow=",cow,end="    ")
		tries+=1
		
	except IndexError:		print("Enter 4 digits",end="");
	except TypeError:		print("Internal type error",end="");
	except EOFError:		print("Type 'exit' to exit",end="");
	except KeyboardInterrupt:	print("Type 'exit' to exit",end="");
	except Exception:		print("Enter Chars only",end="");

	if(bull==4):
		print("");
		if(tries==1):print("You won in 1 try");
		else:print("You won in ",tries,"tries");
		os.system("stty echo");
		sys.exit();
		

	

