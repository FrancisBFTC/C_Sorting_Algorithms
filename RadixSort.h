/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUN�OES DE ORDENA��O ***** */

// Ordena��o por RADIXSORT

// O Radix sort � um algoritmo de ordena��o r�pido e est�vel que pode ser usado para ordenar itens que est�o identificados por chaves �nicas.
// Cada chave � uma cadeia de caracteres ou n�mero, e o radix sort ordena estas chaves em qualquer ordem relacionada com a lexicografia.
// Na ci�ncia da computa��o, radix sort � um algoritmo de ordena��o que ordena inteiros processando d�gitos individuais. Como os inteiros
// podem representar strings compostas de caracteres (como nomes ou datas) e pontos flutuantes especialmente formatados, radix sort n�o � 
// limitado somente a inteiros. 
// O algoritmo de ordena��o radix sort foi originalmente usado para ordenar cart�es perfurados. Um algoritmo computacional para o 
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


/* ***** FIM DAS FUN�OES DE ORDENA��O ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */ 
