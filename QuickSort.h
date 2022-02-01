/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUNÇOES DE ORDENAÇÃO ***** */

// Ordenação por QUICKSORT

// O algoritmo quicksort é um método de ordenação muito rápido e eficiente, inventado por C.A.R. Hoare em 1960, 
// quando visitou a Universidade de Moscovo como estudante. Naquela época, Hoare trabalhou em um projeto de tradução 
// de máquina para o National Physical Laboratory. Ele criou o quicksort ao tentar traduzir um dicionário de inglês para russo, 
// ordenando as palavras, tendo como objetivo reduzir o problema original em subproblemas que possam ser resolvidos mais fácil e rápido.

// O quicksort é um algoritmo de ordenação por comparação não-estável. O quicksort adota a estratégia de divisão e conquista. A estratégia 
// consiste em rearranjar as chaves de modo que as chaves "menores" precedam as chaves "maiores". Em seguida o quicksort ordena as duas sublistas 
// de chaves menores e maiores recursivamente até que a lista completa se encontre ordenada.

void QuickSort (int vet[], int begin, int end){
	int i, j, pivo, aux;                            // Declara as 4 variáveis necessárias
	i = begin;                                      // Armazena em i o índice inicial
	j = end - 1;                                    // Armazena em j o índice final (tamanho do vetor - 1)
	pivo = vet[(begin + end) / 2];                  // Pega o elemento pivo na metade do Vetor
	while(i <= j){                                  // Enquanto índice inicial for menor ou igual ao índice final...
		while(vet[i] < pivo && i < end){            // Enquanto o elemento atrás do pivo for menor que pivo e índice inicial menor que final...
			i++;                                    // Incremente o índice inicial
		}                                           // Volte ao while até que encontre um elemento maior que o pivo e mantém o índice inicial
		while(vet[j] > pivo && j > begin){          // Enquanto o elemento afrente do pivo for maior que pivo e índice final maior que inicial...
			j--;                                    // Decremente o índice final
		}                                           // Volte ao while até que encontre um elemento menor que o pivo e mantém o índice final
		if(i <= j){                                 // Se índice inicial for menor ou igual ao índice final (mantidos), realiza a troca dos elementos.
			aux = vet[i];                           // Elemento de trás do pivo vai para aux
			vet[i] = vet[j];                        // Posição do elemento de trás do pivo fica com o elemento da frente do pivo
			vet[j] = aux;                           // Posição do elemento da frente do pivo fica com o elemento de trás do pivo (aux)
			i++;                                    // Incremente índice inicial (de trás do pivo)
			j--;                                    // Decremente índice final (da frente do pivo)
		}
	}                                               // Volte ao loop while até i e j estiver apontando pro pivo (Metade do Vetor)
	if(j > begin)                                   // Se índice final j for maior que inicio do vetor (Sendo índice final do lado esquerdo)
		QuickSort(vet, begin, j+1);                 // Chame recursivamente a mesma função fazendo o mesmo processo no lado esquerdo
	if(i < end)                                     // Se índice inicial i for menor que final do vetor (Sendo índice inicial do lado direito)
		QuickSort(vet, i, end);                     // Chame recursivamente a mesma função fazendo o mesmo processo no lado direito
}

/* ***** FIM DAS FUNÇOES DE ORDENAÇÃO ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */ 
