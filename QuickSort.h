/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUN�OES DE ORDENA��O ***** */

// Ordena��o por QUICKSORT

// O algoritmo quicksort � um m�todo de ordena��o muito r�pido e eficiente, inventado por C.A.R. Hoare em 1960, 
// quando visitou a Universidade de Moscovo como estudante. Naquela �poca, Hoare trabalhou em um projeto de tradu��o 
// de m�quina para o National Physical Laboratory. Ele criou o quicksort ao tentar traduzir um dicion�rio de ingl�s para russo, 
// ordenando as palavras, tendo como objetivo reduzir o problema original em subproblemas que possam ser resolvidos mais f�cil e r�pido.

// O quicksort � um algoritmo de ordena��o por compara��o n�o-est�vel. O quicksort adota a estrat�gia de divis�o e conquista. A estrat�gia 
// consiste em rearranjar as chaves de modo que as chaves "menores" precedam as chaves "maiores". Em seguida o quicksort ordena as duas sublistas 
// de chaves menores e maiores recursivamente at� que a lista completa se encontre ordenada.

void QuickSort (int vet[], int begin, int end){
	int i, j, pivo, aux;                            // Declara as 4 vari�veis necess�rias
	i = begin;                                      // Armazena em i o �ndice inicial
	j = end - 1;                                    // Armazena em j o �ndice final (tamanho do vetor - 1)
	pivo = vet[(begin + end) / 2];                  // Pega o elemento pivo na metade do Vetor
	while(i <= j){                                  // Enquanto �ndice inicial for menor ou igual ao �ndice final...
		while(vet[i] < pivo && i < end){            // Enquanto o elemento atr�s do pivo for menor que pivo e �ndice inicial menor que final...
			i++;                                    // Incremente o �ndice inicial
		}                                           // Volte ao while at� que encontre um elemento maior que o pivo e mant�m o �ndice inicial
		while(vet[j] > pivo && j > begin){          // Enquanto o elemento afrente do pivo for maior que pivo e �ndice final maior que inicial...
			j--;                                    // Decremente o �ndice final
		}                                           // Volte ao while at� que encontre um elemento menor que o pivo e mant�m o �ndice final
		if(i <= j){                                 // Se �ndice inicial for menor ou igual ao �ndice final (mantidos), realiza a troca dos elementos.
			aux = vet[i];                           // Elemento de tr�s do pivo vai para aux
			vet[i] = vet[j];                        // Posi��o do elemento de tr�s do pivo fica com o elemento da frente do pivo
			vet[j] = aux;                           // Posi��o do elemento da frente do pivo fica com o elemento de tr�s do pivo (aux)
			i++;                                    // Incremente �ndice inicial (de tr�s do pivo)
			j--;                                    // Decremente �ndice final (da frente do pivo)
		}
	}                                               // Volte ao loop while at� i e j estiver apontando pro pivo (Metade do Vetor)
	if(j > begin)                                   // Se �ndice final j for maior que inicio do vetor (Sendo �ndice final do lado esquerdo)
		QuickSort(vet, begin, j+1);                 // Chame recursivamente a mesma fun��o fazendo o mesmo processo no lado esquerdo
	if(i < end)                                     // Se �ndice inicial i for menor que final do vetor (Sendo �ndice inicial do lado direito)
		QuickSort(vet, i, end);                     // Chame recursivamente a mesma fun��o fazendo o mesmo processo no lado direito
}

/* ***** FIM DAS FUN�OES DE ORDENA��O ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */ 
