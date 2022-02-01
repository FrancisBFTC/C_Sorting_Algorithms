/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUN�OES DE ORDENA��O ***** */

// Ordena��o por COCKTAILSORT

// Cocktail shaker sort, tamb�m conhecido como bubble sort bidirecional, cocktail sort, 
// shaker sort (o qual tamb�m pode se referir a uma varia��o do insertion sort), ripple sort, shuffle sort, ou shuttle sort, 
// � uma variante do bubble sort, que � um algoritmo com n�o-est�vel e efetua Ordena��o por compara��o. 
// O algoritmo difere de um bubble sort no qual ordena em ambas as dire��es a cada itera��o sobre a lista. Esse algoritmo de ordena��o 
// � levemente mais dif�cil de implementar que o bubble sort, e e resolve o problema com os chamados coelhos e tartarugas no bubble sort.
// Ele possui performance levemente superior ao bubble sort, mas n�o melhora a performance assint�tica; assim como o bubble sort, 
// n�o � muito usado na pr�tica (insertion sort � escolhido para ordena��o simples), embora seja usado para fins did�ticos.
// A complexidade do Cocktail shaker sort em nota��o big-O � O(n�) para o pior caso e caso m�dio,
// mas tende a se aproximar de O(n) se a lista se encontra parcialmente ordenada antes da execu��o do algoritmo. 
// Por exemplo, se cada elemento se encontra em uma posi��o cuja dist�ncia at� sua posi��o ordenada � k (k = 1), a complexidade do algoritmo 
// se torna O(kn).

void CockTailSort(int vet[], int tam){
	int start, end, swap, aux, i;
	start = 0;
	end = tam - 1;
	swap = 0;
	while(swap == 0 && start < end){
		swap = 1;
		for(i = 0; i < end; i = i + 1){
			if(vet[i] > vet[i + 1]){
				aux = vet[i];
				vet[i] = vet[i + 1];
				vet[i + 1] = aux;
				swap = 0;
			}
		}
		end = end - 1;
		for(i = end; i > start; i = i - 1){
			if(vet[i] < vet[i - 1]){
				aux = vet[i];
				vet[i] = vet[i - 1];
				vet[i - 1] = aux;
				swap = 0;
			}
		}
		start = start + 1;
	}
} 

/* ***** FIM DAS FUN�OES DE ORDENA��O ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */ 
