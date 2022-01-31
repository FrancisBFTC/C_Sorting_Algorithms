/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUN�OES DE ORDENA��O ***** */

// Ordena��o por ODDEVENSORT

/* 
O Odd-even sort � um algoritmo de ordena��o relativamente simples. � um algoritmo de ordena��o por compara��o baseado 
no bubble sort com o qual compartilha muitas caracter�sticas. Ele funciona atrav�s da compara��o de todos os pares indexados 
(�mpar, par) de elementos adjacentes na lista e, se um par est� na ordem errada (o primeiro � maior do que o segundo),
 os elementos s�o trocados. 
 */

#define swap(A,B) aux = A; A = B; B = aux;

void OddEvenSort(int vector[], int n){
	int sorted = 0;
	int x, aux;
	while(!sorted){
		sorted = 1;
		for(x = 1; x < n-1; x += 2){
			if(vector[x] > vector[x+1]){
				swap(vector[x], vector[x+1]);
				sorted = 0;
			}
		}
		for(x = 0; x < n-1; x += 2){
			if(vector[x] > vector[x+1]){
				swap(vector[x], vector[x+1]);
				sorted = 0;
			}
		}
			
	}
}

/* ***** FIM DAS FUN�OES DE ORDENA��O ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */ 
