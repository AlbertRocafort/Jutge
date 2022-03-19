from jutge import read
import math


def seguent_num(n):

	#(sqrt(1+8n) - 1) / 2
	i = (((1+8*n)**(1.0/2)-1)/2)
	i = math.ceil(i)

	return int(i * (i+1) / 2)



def main():

	n = read(int)

	while n != None:
		print(seguent_num(n))
		n = read(int)


main()
