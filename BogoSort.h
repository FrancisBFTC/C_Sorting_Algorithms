/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUN�OES DE ORDENA��O ***** */

// Ordena��o por BOGOSORT (CaseSort ou Estou com Sorte)
//
/* Bogosort (tamb�m conhecido como CaseSort ou Estou com Sort), � um algoritmo de ordena��o extremamente ineficiente. 
� baseado na reordena��o aleat�ria dos elementos. N�o � utilizado na pr�tica, mas pode ser usado no ensino de algoritmos 
mais eficientes. Seu nome veio do engra�ado termo quantum bogodynamics e, ultimamente, a palavra bogus. 

Esse algoritmo � probabil�stico por natureza. Se todos os elementos a serem ordenados s�o distintos, a complexidade 
esperada � O(n � n!). O tempo exato de execu��o esperado depende do quantos diferentes valores de elementos ocorrem, 
e quantas vezes cada um deles ocorre, mas para casos n�o-triviais o tempo esperado de execu��o � exponencial ou 
super-exponencial a n.

Ele termina pela mesma raz�o do teorema do macaco infinito; existe alguma probabilidade de que aconte�a a permuta��o correta, 
dado que em um infinito n�mero de tentativas fatalmente a encontrar�. Deve-se notar que com os algoritmos geradores de n�meros 
pseudo-aleat�rios, que t�m um n�mero finito de estados e n�o s�o realmente aleat�rios, o algoritmo pode nunca terminar para certos 
conjuntos de valores a serem ordenados. Bogosort � um algoritmo de ordena��o n�o est�vel. 
*/

bool is_sorted(int *a, int n)
{
  while ( --n >= 1 ) {
    if ( a[n] < a[n-1] ) return false;
  }
  return true;
}
 
void shuffle(int *a, int n)
{
  int i, t, r;
  for(i=0; i < n; i++) {
    t = a[i];
    r = rand() % n;
    a[i] = a[r];
    a[r] = t;
  }
}
 
void BogoSort(int *vector, int tam)
{
  while ( !is_sorted(vector, tam) ) shuffle(vector, tam);
}

/* ***** FIM DAS FUN�OES DE ORDENA��O ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */ 
