#include <stdio.h>

/*autor: Beatriz Lima
  ano: 2021
  discipl�na: AlgProg2*/

/*Fa�a um programa que leia um valor T e preencha
um vetor N[1000] com a sequ�ncia de valores de 0 at� T-1
repetidas vezes, conforme exemplo abaixo.
Imprima o vetor N.
*/
int main()
{
    int t, n[1000], i;
    scanf("%d", &t);

    for(i = 0; i < 1000; i++)
        n[i] = i%t;

    for(i = 0; i < 1000; i++)
        printf("N[%d] = %d\n", i, n[i]);


    return 0;
}
