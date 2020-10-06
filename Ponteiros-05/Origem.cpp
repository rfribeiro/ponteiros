// Tecnoservice-Curso.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

#define MAX_VECTOR_SIZE 10

void preencher(int* vec, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        vec[i] = i * 10;
    }
}

void imprimir(int* vec, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        std::cout << vec[i] << std::endl;
    }
}

int main()
{
    int* vec = NULL;

    vec = (int*)malloc(MAX_VECTOR_SIZE * sizeof(int));
    preencher(vec, MAX_VECTOR_SIZE);
    imprimir(vec, MAX_VECTOR_SIZE);

    std::cout << std::endl << std::endl;

    vec = (int*)malloc(MAX_VECTOR_SIZE * 10 * sizeof(int));
    preencher(vec, MAX_VECTOR_SIZE * 10);
    imprimir(vec, MAX_VECTOR_SIZE * 10);

    free(vec);
}
