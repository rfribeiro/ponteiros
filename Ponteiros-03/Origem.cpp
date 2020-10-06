// Tecnoservice-Curso.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

#define MAX_VECTOR_SIZE 10

void reverso(int* vec)
{
    int* vec_init = vec;
    int* vec_end = vec + MAX_VECTOR_SIZE - 1;

    while (vec_init < vec_end)
    {
        int aux = *vec_init;

        *vec_init = *vec_end;
        *vec_end = aux;

        vec_init++;
        vec_end--;
    }
}

void reverso2(int* vec)
{
    for (int i = 0, j = MAX_VECTOR_SIZE - 1; i < j; i++, j--)
    {
        int aux = vec[i];
        vec[i] = vec[j];
        vec[j] = aux;
    }
}

int main()
{
    int* vec = NULL;
    vec = (int*)malloc(MAX_VECTOR_SIZE * sizeof(int));

    memset(vec, 0, MAX_VECTOR_SIZE * sizeof(int));

    for (int i = 0; i < MAX_VECTOR_SIZE; i++)
    {
        vec[i] = 10 * i;
    }

    reverso(vec);

    for (int i = 0; i < MAX_VECTOR_SIZE; i++)
    {
        std::cout << vec[i] << std::endl;
    }

    free(vec);
}
