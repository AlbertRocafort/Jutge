from jutge import read

def expresio():

	c = read(chr)

	if c >= "0" and c <= "9": return int(c)

	operand1 = expresio()
	signe = read(chr)
	operand2 = expresio()
	aux = read(chr)

	if signe == '+': return operand1 + operand2
	if signe == '*': return operand1 * operand2
	return operand1 - operand2


def main():
	print(expresio())


main()