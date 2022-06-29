#include "ShellSort.h"
#include <random>
#include <ctime>
#include <iostream>
void Radix::generar_arreglo(Vector vector, int tamanio, int rango)
{
    encerar_arreglo(vector, tamanio);
    srand(time(NULL));
    int number = 0;
    for (int i = 0; i < tamanio; i++) {
        number = 1 + rand() % (rango);
        *(vector.get_arreglo() + i) = number;
    }
}

void Radix::imprimir_arreglo(Vector vector, int tamanio)
{
    for (int i = 0; i < tamanio; i++) {
        cout << " " << *(vector.get_arreglo() + i) << endl;
    }
}


void Radix::ordenar_intercambio(Vector vector, int tamanio)
{
    int aux = 0;
    for (int i = 0; i < tamanio - 2; i++) {
        for (int j = i + 1; j < tamanio - 1; j++) {
            if (*(vector.get_arreglo() + i) > *(vector.get_arreglo() + j)) {
                aux = *(vector.get_arreglo() + i);
                *(vector.get_arreglo() + i) = *(vector.get_arreglo() + j);
                *(vector.get_arreglo() + j) = aux;
            }
        }
    }
}

void Radix::encerar_arreglo(Vector vector, int tamanio)
{
    for (int i = 0; i < tamanio; i++) {

        *(vector.get_arreglo() + i) = 0;
    }
}

int Radix::maxm(Vector vector, int n) {

    int max = *vector.get_arreglo();
    for (int i = 1; i < n; i++)
    {
        if (*(vector.get_arreglo() + i) > max)
        {
            max = *(vector.get_arreglo() + i);
        }
    }
    return max;
}

void Radix::rad(Vector vector, int _tamano) {
     for (int gap = _tamano / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < _tamano; i += 1)
		{
			int temp = *(vector.get_arreglo + i);

			int j;
			for (j = i; j >= gap && *(vector.get_arreglo + (j - gap)) > temp; j -= gap) {
				*(vector.get_arreglo + j) = *(vector.get_arreglo + (j - gap));
			}

			*(vector.get_arreglo + j) = temp;
		}
	}
    /*int* output = new int[n];
    int count[10];

    for (int i = 0; i < 10; ++i)
        count[i] = 0;

    for (int i = 0; i < n; i++)
        count[(*(vector.get_arreglo() + i) / place) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; i--) {
        output[count[(*(vector.get_arreglo() + i) / place) % 10] - 1] = *(vector.get_arreglo() + i);
        count[(*(vector.get_arreglo() + i) / place) % 10]--;
    }

    for (int i = 0; i < n; i++)
        *(vector.get_arreglo() + i) = output[i];*/
}

void Radix::radixsort(Vector vector, int n) {
    //int max = maxm(vector, n);
    for(int i = n; i<100; i+n){
         Shell(vector,n);
    }
    //for (int place = 1; max / place > 0; place *= 10)
        //rad(vector, n, place);
        
}
