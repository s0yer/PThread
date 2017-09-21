#include <stdio.h>
#include <stdlib.h>
#define linhas 10
#define colunas 10

int main()
{
    int **m, **k, **r;
    int l,c,aux;

    //matriz 1
    printf("\n matriz 2 abaixo: \n");

    m =(int**)malloc(linhas*sizeof(int*)); // aloca um vetor de ponteiros

    for(l=0;l<linhas;l++){
        m[l]=(int*)malloc(colunas*sizeof(int)); // aloca um vetor de inteiros para cada posição do vetor de ponteiros
        for(c=0;c<colunas;c++){
            m[l][c]= rand()%100;
        }
    }

    for(l=0;l<linhas;l++){
        for(c=0;c<colunas;c++){
           printf(" %d",m[l][c]);
        }
        printf("\n");
    }

     //matriz 2
    printf("\n matriz 2 abaixo: \n");

    k =(int**)malloc(linhas*sizeof(int*)); // aloca um vetor de ponteiros

    for(l=0;l<linhas;l++){
        k[l]=(int*)malloc(colunas*sizeof(int)); // aloca um vetor de inteiros para cada posição do vetor de ponteiros
        for(c=0;c<colunas;c++){
            k[l][c]= rand()%100;
        }
    }

    for(l=0;l<linhas;l++){
        for(c=0;c<colunas;c++){
           printf(" %d",k[l][c]);
        }
        printf("\n");
    }

    //matriz resultado

    printf("\n matriz resultado abaixo: \n");

    r =(int**)malloc(linhas*sizeof(int*)); // aloca um vetor de ponteiros

    for(l=0;l<linhas;l++){
        r[l]=(int*)malloc(colunas*sizeof(int)); // aloca um vetor de inteiros para cada posição do vetor de ponteiros
        for(c=0;c<colunas;c++){
            r[l][c]= 0;
        }
    }

    for(l=0;l<linhas;l++){
        for(c=0;c<linhas;c++){
            for(aux=0;aux<colunas;aux++){
                r[l][c] = r[l][c] + (m[l][aux] * k[aux][c]);
            }
        }
    }


    for(l=0;l<linhas;l++){
        for(c=0;c<colunas;c++){
           printf(" %d",r[l][c]);
        }
        printf("\n");
    }




    system("Pause");
    free(m);
    free(k);
    free(r);
}
