#include <stdio.h>
#include <stdlib.h>
// Define a matriz com 10 linhas e 10 colunas
// Define the array with 10 rows and 10 columns
#define linhas 10
#define colunas 10

int main()
{
    int **m, **k, **r;
    int l,c,aux;

    // matriz 1
    // Array 1
    printf("\n matriz 1 abaixo \n");

    // aloca um vetor de ponteiros
    // allocates a vector of pointers
    
    m =(int**)malloc(linhas*sizeof(int*)); 

    for(l=0;l<linhas;l++){
        
        // aloca um vetor de inteiros para cada posição do vetor de ponteiros
        // allocates an integer vector for each position of the vector of pointers
        
        m[l]=(int*)malloc(colunas*sizeof(int)); 
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

    // matriz 2
    // Array 2
    printf("\n matriz 2 abaixo \n");

    // aloca um vetor de ponteiros
    // allocates a vector of pointers
    
    k =(int**)malloc(linhas*sizeof(int*)); 

    for(l=0;l<linhas;l++){
        
        // aloca um vetor de inteiros para cada posição do vetor de ponteiros
        // allocates an integer vector for each position of the vector of pointers
        k[l]=(int*)malloc(colunas*sizeof(int)); 
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

    // matriz resultado
    // result array

    printf("\n matriz resultado abaixo: \n");
    
    // aloca um vetor de ponteiros
    // allocates a vector of pointers
    r =(int**)malloc(linhas*sizeof(int*)); 

    for(l=0;l<linhas;l++){
        
        
        // aloca um vetor de inteiros para cada posição do vetor de ponteiros
        // allocates an integer vector for each position of the vector of pointers
        r[l]=(int*)malloc(colunas*sizeof(int)); 
        for(c=0;c<colunas;c++){
            r[l][c]= 0;
        }
    }

    // Multiplica as posições da matriz 1 e matriz 2 para popular a matriz resultado
    // Multiply the positions of array 1 and array 2 to populate the result array
    
    for(l=0;l<linhas;l++){
        for(c=0;c<linhas;c++){
            for(aux=0;aux<colunas;aux++){
                r[l][c] = r[l][c] + (m[l][aux] * k[aux][c]);
            }
        }
    }

    // Imprime  a matriz resultado no console
    // Print the result array in the console
    for(l=0;l<linhas;l++){
        for(c=0;c<colunas;c++){
           printf(" %d",r[l][c]);
        }
        printf("\n");
    }




    system("Pause");
    
    // Libera a memória do sistema
    // Free the system memory
    free(m);
    free(k);
    free(r);
}
