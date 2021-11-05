#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main() {

	int ivalor = 30;
	int icontador = 0;
	int i = 0;

	for(int i = 1; i <= ivalor; i++){
		icontador += i;
		cout << "Ciclo for i = " << icontador << endl;
	}
	cout << "*-*-*-*-*-* Llamando otro programa *-*-*-*-*" << endl;
	system("./bin/area");
	return 0;
}
