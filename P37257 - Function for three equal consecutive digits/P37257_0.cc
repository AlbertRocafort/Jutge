



bool tres_digits_seguits_iguals(int n, int b) {

	//Si n == 0 els 3 dígits que calculariem valdrien 0, i es retornaria true, quan s'haura de retornar false
	if (n == 0) return false;

	//Var auxiliar per no modificar n
	int m = n;


	//Agafem els 3 primers dígits de n
	int x1 = m % b;
	m /= b;
	int x2 = m % b;
	m /= b;
	int x3 = m % b;

	//Si els 3 dígits que hem agafat són iguals, es retorn
	return (x1 == x2 and x2 == x3) or tres_digits_seguits_iguals(n / b, b);
}