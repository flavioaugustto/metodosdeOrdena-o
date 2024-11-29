#include<stdio.h>

//funcao para criar linha separadora
void linha(){
	printf("\n");
	for(int x = 0; x < 50; x++){
		printf("=");
	}
	printf("\n");
}

//funcao para executar o selection sort
void selectionsort(int v1[], int size) {
	for(int x = 0; x < size - 1; x++){
		int menor = x;
	   	
		//achando a posição do menor valo não organizado
	   	for(int y = x + 1; y < size; y++){
	   		if(v1[y] < v1[menor]){
	   			menor = y;
			}
		}
		
		//trocando elementos
		int tmp = v1[menor];
		v1[menor] = v1[x];
		v1[x] = tmp;
	}
}

//funcao para imprimir vetor
void imprimir(int v1[], int size){
	for(int x = 0; x < size; x++){
		if(x != size-1){ //verificando chegada do final do vetor
			printf("%d, ", v1[x]);
		} else {
			printf("%d.\n", v1[x]);
		}
	}
}

int main(){
	int v1[10] = {10, 4, 5, 2, 3, 1, 7, 6, 8, 9}; //vetor desorganizado
	
	//titulo
	linha();
	printf("INSERTION SORT");
	linha();
	
	//imprimindo vetor desorganizado
	printf("Vetor desorganizado: ");
	imprimir(v1, 10);
	
	selectionsort(v1, 10);//executando isentionsort
	
	//imprimindo vetor organizado
	printf("Vetor organizado: ");
	imprimir(v1, 10);
	
	return 0;
}
