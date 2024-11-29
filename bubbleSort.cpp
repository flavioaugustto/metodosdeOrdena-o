#include<stdio.h>

//funcao para criar linha separadora
void linha(){
	printf("\n");
	for(int x = 0; x < 50; x++){
		printf("=");
	}
	printf("\n");
}

//funcao para executar o bubble sort
void bubblesort(int v1[], int size){
	for(int x = 0; x < size - 1; x++){
		//vereficar se valores devem ser trocados
		for(int y = 0; y < size - 1; y++){
			if (v1[y] > v1[y + 1]){ 
				int tmp = v1[y];
				v1[y] = v1[y + 1];
				v1[y + 1] = tmp;
			}
		}	
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
	printf("BUBBLE SORT");
	linha();
	
	//imprimindo vetor desorganizado
	printf("Vetor desorganizado: ");
	imprimir(v1, 10);
	
	bubblesort(v1, 10);//executando bubblesort
	
	//imprimindo vetor organizado
	printf("Vetor organizado: ");
	imprimir(v1, 10);
	
	return 0;
}
