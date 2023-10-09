lines = ["This is first line.", "This is second line.", "This is third line."]
with open("file.txt","w") as fp:
	for line in lines:
		fp.write(line+"\n")