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
    int* vec1 = NULL;
    int* vec2 = NULL;

    vec1 = (int*)malloc(MAX_VECTOR_SIZE * sizeof(int));
    preencher(vec1, MAX_VECTOR_SIZE);
    imprimir(vec1, MAX_VECTOR_SIZE);

    std::cout << std::endl << std::endl;

    vec2 = (int*)malloc(MAX_VECTOR_SIZE * sizeof(int));
    
    memcpy(vec2, vec1, MAX_VECTOR_SIZE * sizeof(int));

    imprimir(vec2, MAX_VECTOR_SIZE);

    free(vec1);
}
