/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUN�OES DE ORDENA��O ***** */

// Ordena��o por TIMSORT

// Timsort � um algoritmo de ordena��o h�brido derivado do merge sort e do insertion sort, projetado para ter boa performance 
// em v�rios tipos de dados do mundo real. Foi inventado por Tim Peters em 2002 para ser usado na linguagem de programa��o Python,
// e tem sido o algoritmo de ordena��o padr�o de Python desde a vers�o 2.3. Ele atualmente � usado para ordenar arrays em Java SE 7.
// Tim Peters descreve o algoritmo da seguinte forma:

/*um adaptativo, est�vel, merge sort natural, modestamente chamado de timsort (hey, eu mere�o <wink>). Tem desempenho sobrenatural em muitos 
tipos de arrays parcialmente ordenados (menos de lg(N!) compara��es necess�rias, e t�o poucas quanto N-1), no entanto, t�o r�pido quanto o 
algoritmo anterior altamente sintonizado, h�brido, samplesort de Python em matrizes aleat�rias. Em suma, a rotina principal passa sobre a 
matriz uma vez, da esquerda para a direita, alternadamente, identificando o pr�ximo passo, em seguida, fundindo-os em passos anteriores "inteligentemente". 
Todo o resto � complica��o pela velocidade, e alguma medida duramente conquistada da efici�ncia de mem�ria.*/

/* TimSort � um algoritmo h�brido de ordena��o baseado no MergeSort e InsertionSort. O algoritmo baseia-se na ideia de que, no mundo real, um vetor de dados 
a ser ordenado cont�m sub-vetores j� ordenados, n�o importando como (decrescentemente ou crescentemente). Assim, o TimSort est� � frente da maioria dos algoritmos 
de ordena��o, mesmo n�o apresentando descobertas matem�ticas complexas. O fato � que na realidade o TimSort n�o � um algoritmo aut�nomo, mas um h�brido, 
uma combina��o eficiente de outros algoritmos, temperado com as id�ias do autor. O algoritmo completo comentado, traduzido do Python para Java pode ser encontrado 
no site da openjdk*/

const int RUN = 32;

int min(int X, int Y){
	return (((X) < (Y)) ? (X) : (Y));
}

void TimSort(int vector[], int n){
	int i, s, left;
	for(i = 0; i < n; i+=RUN)
		Insertion(vector, i, min((i+RUN-1), (n-1)));
	
	for(s = RUN; s < n; s *= 2){
		for(left = 0; left < n; left += s*2){
			int mid = left + s - 1; // encontra o ponto final do subarray esquerdo mid+1 � o ponto inicial do subarray direito
			int right = min((left + 2*s - 1), (n-1));
			Merge(vector, left, mid, right); // mescla sub array arr[esquerda.....mid] & arr[mid+1....right]
		}
	}
		
}

/* ***** FIM DAS FUN�OES DE ORDENA��O ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */ 
