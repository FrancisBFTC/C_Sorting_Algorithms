/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUN�OES DE ORDENA��O ***** */

// Ordena��o por SHELLSORT

// Criado por Donald Shell em 1959, publicado pela Universidade de Cincinnati, Shell sort � o mais eficiente algoritmo 
// de classifica��o dentre os de complexidade quadr�tica. � um refinamento do m�todo de inser��o direta. O algoritmo difere 
// do m�todo de inser��o direta pelo fato de no lugar de considerar o array a ser ordenado como um �nico segmento, ele considera 
// v�rios segmentos sendo aplicado o m�todo de inser��o direta em cada um deles.
// Basicamente o algoritmo passa v�rias vezes pela lista dividindo o grupo maior em menores. Nos grupos menores � aplicado o 
// m�todo da ordena��o por inser��o.

void ShellSort (int *vet, int tam){
	int i, j, value;
	int gap = 1;
	
	while(gap < tam){
		gap = 3 * gap + 1;
	}
	while(gap > 0){
		for(i = gap; i < tam; i++){
			value = vet[i];
			j = i;
			while(j > gap - 1 && value <= vet[j - gap]){
				vet[j] = vet[j - gap];
				j = j - gap;
			}
			vet[j] = value;
		}
		gap = gap / 3;
	}
}

/* ***** FIM DAS FUN�OES DE ORDENA��O ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */ 
