#include<stdio.h>

//funcao para criar linha separadora
void linha(){
	printf("\n");
	for(int x = 0; x < 50; x++){
		printf("=");
	}
	printf("\n");
}

//funcao para executar o insention sort
void insertionsort(int v1[], int size) {
    for (int x = 1; x < size; x++) {
        int tmp = v1[x]; //elemento a chegar posição
        int j = x - 1;

        //trocando elementeos de posição
        while (j >= 0 && v1[j] > tmp) {
            v1[j + 1] = v1[j];
            j--;
        }
        v1[j + 1] = tmp;
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
	
	insertionsort(v1, 10);//executando isentionsort
	
	//imprimindo vetor organizado
	printf("Vetor organizado: ");
	imprimir(v1, 10);
	
	return 0;
}
