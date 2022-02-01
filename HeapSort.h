/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUN�OES DE ORDENA��O ***** */

// Ordena��o por HEAPSORT

// O algoritmo heapsort � um algoritmo de ordena��o generalista, e faz parte da fam�lia de algoritmos de ordena��o por sele��o. 
// Foi desenvolvido em 1964 por Robert W. Floyd e J.W.J Williams. 
// Tem um desempenho em tempo de execu��o muito bom em conjuntos ordenados aleatoriamente, tem um uso de mem�ria bem comportado e o 
// seu desempenho em pior cen�rio � praticamente igual ao desempenho em cen�rio m�dio. Alguns algoritmos de ordena��o r�pidos t�m 
// desempenhos espectacularmente ruins no pior cen�rio, quer em tempo de execu��o, quer no uso da mem�ria. 

// O heapsort que trabalha no lugar e o tempo de execu��o em pior cen�rio para ordenar n elementos � de O (n log n). L�-se logaritmo 
// (ou log) de "n" na base 2. Para valores de n, razoavelmente grandes, o termo log n � quase constante, de modo que o tempo de 
// ordena��o � quase linear com o n�mero de itens a ordenar.
// O heapsort utiliza uma estrutura de dados chamada heap, para ordenar os elementos � medida que os insere na estrutura. Assim,
// ao final das inser��es, os elementos podem ser sucessivamente removidos da raiz da heap, na ordem desejada, lembrando-se sempre 
// de manter a propriedade de max-heap. 

// A heap pode ser representada como uma �rvore (uma �rvore bin�ria com propriedades especiais) ou como um vetor. Para uma ordena��o 
// decrescente, deve ser constru�da uma heap m�nima (o menor elemento fica na raiz). Para uma ordena��o crescente, deve ser constru�do 
// uma heap m�xima (o maior elemento fica na raiz). 

void HeapSort (int vector[], int n){
	int i = n / 2;
	int father, son, t;
	while(true){
		if(i > 0){
			i--;
			t = vector[i];
		} else {
			n--;
			if (n <= 0) return;
			t = vector[n];
			vector[n] = vector[0];
		}
		
		father = i;
		son = i * 2 + 1;
		
		while(son < n){
			if((son + 1 < n) && (vector[son + 1] > vector[son]))
				son++;
			if(vector[son] > t){
				vector[father] = vector[son];
				father = son;
				son = father * 2 + 1;
			} else {
				break;
			}
		}
		vector[father] = t;
	}
}

/* ***** FIM DAS FUN�OES DE ORDENA��O ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */ 
