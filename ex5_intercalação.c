#include <stdio.h>
#include <stdlib.h>
#define MAX 50
//Escreva uma versão da ordenação por intercalação que rearranje um vetor v[p..r − 1] em ordem decrescente.
void intercala(int p, int q, int r, int v[MAX])
{
    int i, j, k, w[MAX];
    i = p;
    j = q;
    k = 0;
    while (i < q && j < r)
    {
        if (v[i] >= v[j])
        {
            w[k] = v[i];
            i++;
        }
        else {
            w[k] = v[j];
            j++;
        }
        k++;
    }
    while (i < q) {
        w[k] = v[i];
        i++;
        k++;
    }
    while (j < r) {
        w[k] = v[j];
        j++;
        k++;
    }
    for (i = p; i < r; i++)
        v[i] = w[i-p];
}


void mergesort(int p, int r, int v[MAX])
{
    int q;
    if (p < r - 1) {
    q = (p + r) / 2;
    mergesort(p, q, v);
    mergesort(q, r, v);
    intercala(p, q, r, v);
  }

}

int main()
{
    int v[MAX];
    int p = 0, r;
    int i;

    scanf("%d", &r);
    for(i = 0; i < r; i++)
        scanf("%d", &v[i]);

    mergesort(p, r, v);
    for(i = 0; i < r; i++)
        printf("%d ", v[i]);
    return 0;
}
