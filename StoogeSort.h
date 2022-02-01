/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
/* ***** FUN�OES DE ORDENA��O ***** */

// Ordena��o por STOOGESORT (Ordena��o Pateta)
//
/* O Stooge Sort, ou ordena��o "Pateta", � um algoritmo de ordena��o que se faz do uso das t�cnicas de divis�o e conquista, 
ou seja, recursivamente o algoritmo realiza parti��es virtuais da entrada e transforma o problema maior em pequenos subproblemas 
at� que a ordena��o seja m�nima.

Comparado a outros algoritmos de ordena��o mais conhecidos, como o Insertion Sort e o Bubble Sort, ele chega a ser mais lento. 
Devido � sua inefici�ncia, recomenda-se que n�o seja usado na ordena��o de grandes volumes de dados. 
O nome do algoritmo faz refer�ncia a uma com�dia norte-americana chamada The Three Stooges (em portugu�s, Os Tr�s Patetas), 
em que Moe batia repetidamente nos outros dois patetas, assim como o Stooge Sort repetidamente ordena 2/3 do array. 
*/

#define SWAP(r,s)  do{ t=r; r=s; s=t; } while(0)

void StoogeSort(int vect[], int x, int y)
{
   int t;

   if (vect[y] < vect[x]) SWAP(vect[x], vect[y]);
   if (y - x > 1)
   {
       t = (y - x + 1) / 3;
       StoogeSort(vect, x, y - t);
       StoogeSort(vect, x + t, y);
       StoogeSort(vect, x, y - t);
   }
}

/* ***** FIM DAS FUN�OES DE ORDENA��O ***** */
/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */ 
