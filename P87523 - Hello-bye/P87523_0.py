from jutge import read

def hola():

	c = read(chr)

	while c != ".":

		if c == "h":

			c = read(chr)
			if c == "o":

				c = read(chr)
				if c == "l":

					c = read(chr)
					if c == "a": return True

		else: c = read(chr)

	return False




def main():

	if hola(): print("hola")
	else: print("adeu")


main()