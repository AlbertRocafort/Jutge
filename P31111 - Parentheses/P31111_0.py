from jutge import read

def parentesis():

	obre_parentesis = 0
	tanca_parentesis = 0

	c = read(chr)
	while c != None:

		if c == "(": obre_parentesis += 1
		else: tanca_parentesis += 1

		if tanca_parentesis > obre_parentesis: return False

		c = read(chr)

	if tanca_parentesis != obre_parentesis: return False
	return True





def main():

	if parentesis(): print("si")
	else: print("no")


main()