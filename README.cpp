# problema10
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
using namespace std;

////Problema 10
bool busq_secuencial(int v[], int n, int e)
{	int i = 0;
for (i; i<n; i++){
	if (e==v[i]) return true;
}
return false;
}
int main(){
	int i = 0,num,tam = 400000;
	int vector[tam];
	
	for(i;i<tam;i++) {
		vector[i] = rand() % 100;
		 //cout << vector[i] << ", ";
	}
	
	cout << "Ingrese un numero a Buscar : "; cin >> num;
	if (busq_secuencial(vector,tam,num)){
		cout << "Econtrado !!!" << endl;
	}
	else
		cout << "No Encontrado !!!" << endl;
	return 0;
}
