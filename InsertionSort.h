/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUN�OES DE ORDENA��O ***** */

// Ordena��o por Inser��o
//
// Insertion Sort ou ordena��o por inser��o � o m�todo que percorre um vetor de elementos da esquerda para a direita 
// e � medida que avan�a vai ordenando os elementos � esquerda. Possui complexidade C(n) = O(n) no melhor caso e C(n) = O(n�) 
// no caso m�dio e pior caso. � considerado um m�todo de ordena��o est�vel.

// Um m�todo de ordena��o � est�vel se a ordem relativa dos itens iguais n�o se altera durante a ordena��o. 
// O funcionamento do algoritmo � bem simples: consiste em cada passo a partir do segundo elemento selecionar 
// o pr�ximo item da sequ�ncia e coloc�-lo no local apropriado de acordo com o crit�rio de ordena��o. 

void InsertionSort (int vector[], int size){
    int i, j, x;
    for (i=1; i<=size; i++){				// come�ando do 2� item, navega no Array at� chegar no �ltimo item
        x = vector[i];						// armazena em x o 2� item
        j = i-1;							// j apontar� pro 1� item
        vector[-1] = x;  					// armazena o 2� item em uma posi��o -1.
        while (x < vector[j]){ 				// enquanto o 2� item for menor que o 1� item...
            vector[j+1] = vector[j];        // a 2� posi��o recebe o 1� item
            j--;							// j aponta pro item x na posi��o -1.
        }									// Itera no While at� x seja igual ao valor da posi��o -1 (que � x)
        vector[j+1] = x; 					// armazena o 2� item na 1� posi��o
    }										// Na pr�xima itera��o o 2� item passar� a ser o 3�, depois o 4�,etc..
}

/* 
Adapta��o do InsertionSort para utiliza��o do TimSort:

O Algoritmo abaixo � praticamente igual ao algoritmo acima, as �nicas
diferen�as � que o valor de x (que nesse caso � t) n�o � armazenado na posi��o -1,
justamente porque o loop while n�o vai at� esta posi��o nesta vers�o, isto porque o while
tem a condi��o j >= left que j� controla isto (Enquanto j seja maior ou igual ao "menor �ndice atual").
Outra diferen�a � que o "menor �ndice atual", � a vari�vel left porque o algoritmo TimSort
vai controlar isso por l�, j� que left poder� ser o �ndice menor atual da metade do Array em TimSort.
*/
void Insertion(int vector[], int left, int right){
	int i;
	for(i = left + 1; i <= right; i++){
		int t = vector[i];
		int j = i - 1;
		while(j >= left && t < vector[j]){
			vector[j+1] = vector[j--];
		}
		vector[j+1] = t;
	}
}

/* ***** FIM DAS FUN�OES DE ORDENA��O ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
