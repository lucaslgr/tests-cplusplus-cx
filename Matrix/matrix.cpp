/*
**Como saber se uma matriz é inversível?
*Para sabermos se uma matriz é inversível precisamos encontrar o seu determinante. Se o determinante de uma matriz for diferente *de zero, então a matriz é inversível. Caso contrário ela não possui uma matriz inversa.
*Dessa forma, podemos concluir que somente uma matriz quadrada possui inversa, já que somente podemos calcular o determinante de *uma matriz quadrada. Uma matriz quadrada é uma matriz que possui a mesma quantidade de linhas e colunas.
*/

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h> //É uma biblioteca para windows para usar o getch()
#include <ncurses.h>
#include <string.h>

void printMatrix(float** matrix, int &dim)
{
    for(int i = 0; i < dim; i++)
    {
        for(int j = 0; j < dim; j++)
        {
            printf("%.2f", matrix[i][j]);
            if(j==(dim-1))
                printf("\n");
            else
                printf("\t");
        }
    }
    printf("\n");
    return;
}

float calcDiagonal(float **matrix, int &dim, int colInit)
{
    float detPartial;

    //Percorre as colunas para direita
    
    return detPartial;
}

bool calcDeterminante(float **matrix, int &dim)
{
    //float *detPartials = (float*) malloc( (2*dim) * sizeof(float));
    float det;
    for (int i = 0; i < dim*2; i++)
        det += calcDiagonal(matrix, dim, i);

    //Imprimindo o valor do determinante da matriz
    printf("O valor do determinante da matriz foi: %.2f\n", det);
    return(det <= 0)?(false):(true);
}

int main() {
    float **Iden = NULL, **A = NULL;
    int dim = 0, rows = 0, columns = 0;

    printf("\n Digite o nº que representa a dimensão da matriz: ");//Define o tamanho da matriz A
    scanf("%i",&dim);

    //Matriz quadrada nLinhas = nColunas
    rows = dim;
    columns = dim;

    //Allocando dinamicamente espaço das linhas da matiz A da matriz Identidade
    Iden = (float**) malloc(rows * sizeof(float*));
    A = (float**) malloc(rows * sizeof(float*));
    

    printf("\nDifite os valores para os coeficientes da Matriz A: \n");

    //Criando a matriz identidade e ao mesmo tempo pegando os valores da matriz A
    for(int i = 0; i < dim; i++)
    {
        Iden[i] = (float *) malloc(columns * sizeof(float)); //Alocando cada coluna
        A[i] = (float *) malloc(columns * sizeof(float)); //Alocando cada coluna
        
        for(int j = 0; j < dim; j++)
        {
            (i==j)?(Iden[i][j]=1):(Iden[i][j]=0); //Preenchendo a matriz identidade
            printf("\nDigite o valor para o termo A(%i,%i) = ", i+1, j+1);
            scanf("%f", &A[i][j]);
        }
    }      
    printf("\nMatriz Identidade\n");
    printMatrix(Iden, dim); //Printando a matriz identidade
    printf("\n---------------------------------------------------------------------\n");
    printf("\nMatriz A\n");
    printMatrix(A, dim); //Printando a matriz A
    
    if(calcDeterminante)
    {
        printf("A matriz desejada não possui inversa \n");
        exit;
    }
    
    //Calculando o determinante para saber se possui a inversa
}