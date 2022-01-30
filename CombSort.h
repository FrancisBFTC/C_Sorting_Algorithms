/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUN�OES DE ORDENA��O ***** */

// Ordena��o por CombSort

// O algoritmo Comb sort (ou Combo sort ou ainda algoritmo do pente[1]) � um algoritmo de ordena��o relativamente simples, 
// e faz parte da fam�lia de algoritmos de ordena��o por troca.O Comb sort melhora o Bubble sort, e rivaliza com algoritmos 
// como o Quicksort. A ideia b�sica � eliminar as tartarugas ou pequenos valores pr�ximos do final da lista, j� que em um bubble sort 
// estes retardam a classifica��o tremendamente. 

// O Algoritmo repetidamente reordena diferentes pares de itens, separados por um salto, que � calculado a cada passagem. 
// M�todo semelhante ao Bubble Sort, por�m mais eficiente. Na Bubble sort, quando quaisquer dois elementos s�o comparados, 
// eles sempre t�m um gap (dist�ncia um do outro) de 1. A ideia b�sica do Comb sort � que a diferen�a pode ser muito mais do que um. 
// (O Shell sort tamb�m � baseado nesta ideia, mas � uma modifica��o do insertion sort em vez do bubble sort). 

void CombSort (int vet[], int tam){
	int i, j, gap, swapped = 1;
	int aux;
	gap = tam;
	while(gap > 1 || swapped == 1){
		gap = gap * 10 / 13;
		if (gap == 9 || gap == 10) gap = 11;
		if (gap < 1) gap = 1;
		swapped = 0;
		for(i = 0, j = gap; j < tam; i++, j++){
			if(vet[i] > vet[j]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
				swapped = 1;
			}
		} 
	}
}


/* ***** FIM DAS FUN�OES DE ORDENA��O ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
