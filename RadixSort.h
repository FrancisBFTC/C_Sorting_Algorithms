/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUNÇOES DE ORDENAÇÃO ***** */

// Ordenação por RADIXSORT

// O Radix sort é um algoritmo de ordenação rápido e estável que pode ser usado para ordenar itens que estão identificados por chaves únicas.
// Cada chave é uma cadeia de caracteres ou número, e o radix sort ordena estas chaves em qualquer ordem relacionada com a lexicografia.
// Na ciência da computação, radix sort é um algoritmo de ordenação que ordena inteiros processando dígitos individuais. Como os inteiros
// podem representar strings compostas de caracteres (como nomes ou datas) e pontos flutuantes especialmente formatados, radix sort não é 
// limitado somente a inteiros. 
// O algoritmo de ordenação radix sort foi originalmente usado para ordenar cartões perfurados. Um algoritmo computacional para o 
// radix sort foi inventado em 1954 no MIT por Harold H. Seward. 

void RadixSort(int vector[], int size){
	int i;
	int *b; 
	int major = vector[0];
	int exp = 1;
	
	b = (int *) calloc(size, sizeof(int));
	
	for(i = 0; i < size; i++)
		if(vector[i] > major)
			major = vector[i];
	
	while((major / exp) > 0){
		int bucket[10] = { 0 };
		
		for(i = 0; i < size; i++)
			bucket[(vector[i] / exp) % 10]++;
			
		for(i = 1; i < 10; i++)
			bucket[i] += bucket[i - 1];
			
		for(i = size - 1; i >= 0; i--)
			b[--bucket[(vector[i] / exp) % 10]] = vector[i];
			
		for(i = 0; i < size; i++)
			vector[i] = b[i];
		
		exp *= 10;
	}
	
	free(b);
}


/* ***** FIM DAS FUNÇOES DE ORDENAÇÃO ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */ 
