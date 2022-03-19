from easyinput import read

def main() :

    n = read(int)
    numero = read(int)

    i = 1
    while i < n and numero is not None:
        numero = read(int)
        i += 1

    if n > 0 and numero is not None:
        print("A la posicio ", n, " hi ha un ", numero, ".", sep="")

    else:
        print("Posicio incorrecta.")

main()
