#include "lib.h"

void funcionou(){
	printf("Funcionou!");
}

void sair(){
	exit(0);	
}

float velocidadeMedia(int tempo, float espaco){
	float total = (espaco / tempo);
	return total;
}

