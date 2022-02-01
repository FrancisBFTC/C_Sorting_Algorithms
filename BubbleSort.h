/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUN�OES DE ORDENA��O ***** */

// Ordena��o por bolha em C

// O bubble sort, ou ordena��o por flutua��o (literalmente "por bolha"), � um algoritmo de ordena��o dos mais simples.
// A ideia � percorrer o vetor diversas vezes, a cada passagem fazendo flutuar para o topo o maior elemento da sequ�ncia. 
// Essa movimenta��o lembra a forma como as bolhas em um tanque de �gua procuram seu pr�prio n�vel, e disso vem o nome do algoritmo.

// No melhor caso, o algoritmo executa n  opera��es relevantes, onde n representa o n�mero de elementos 
// do vetor. No pior caso, s�o feitas n ^ 2 opera��es. A complexidade desse algoritmo � de 
// Ordem quadr�tica. Por isso, ele n�o � recomendado para programas que precisem de velocidade e operem com quantidade elevada de dados. 

void BubbleSort (int vet[], int tam){
	int mem, exc, i, j;
	exc = 1; 								/*Ser� a verifica��o de troca em casa passada*/
	for(j=tam-1; (j>=1) && (exc==1); j--){
		exc = 0; 							/*Se continuar valendo 0 na pr�xima vez, ent�o n�o houve troca e encerra*/
		for(i=0; i < j; i++){
			if(vet[i] > vet[i+1]){
				mem = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = mem;
				exc = 1;					 /* Havendo troca, com exc=1 ent�o vai continuar executando.*/
			}
		}
	}
}

/* ***** FIM DAS FUN�OES DE ORDENA��O ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
