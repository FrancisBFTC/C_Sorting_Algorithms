/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUN�OES DE ORDENA��O ***** */

// Ordena��o por GNOMESORT

// Algoritmo similiar ao Insertion sort com a diferen�a que o Gnome sort leva um elemento para sua posi��o correta, 
// com uma seq�encia grande de trocas assim como o Bubble sort. O algoritmo percorre o vetor comparando seus elementos dois a dois, 
// assim que ele encontra um elemento que est� na posi��o incorreta, ou seja, um n�mero maior antes de um menor, ele troca a posi��o 
// dos elementos, e volta com este elemento at� que encontre o seu respectivo lugar.
//

void Swap(int *, int *);
void GnomeSort(int[], int);

void Swap(int *X, int *Y){
	int Z = *X;
	*X = *Y;
	*Y = Z;
}

void GnomeSort(int vet[], int tam){
	int previous = 0, next = 0, i = 0;
	
	for(i = 0; i < tam; i++){
		if(vet[i] > vet[i + 1]){
			previous = i;
			next = i + 1;
			while(vet[previous] > vet[next]){
				Swap(&vet[previous], &vet[next]);
				if(previous > 0)
					previous--;
				if(next > 0)
					next--;
			}
		}
	}
}
/* ***** FIM DAS FUN�OES DE ORDENA��O ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */ 
