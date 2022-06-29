#pragma once
#include "Vector.h"
#include <string>
#include<functional>
using namespace std;
class Radix {
public:
	void generar_arreglo(Vector, int, int);
	void imprimir_arreglo(Vector, int);
	void ordenar_intercambio(Vector, int);
	void encerar_arreglo(Vector, int);
	int maxm(Vector, int n);
	void rad(Vector, int n, int place);
	void radixsort(Vector, int n);
};
