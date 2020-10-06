// Tecnoservice-Curso.cpp : Este arquivo cont�m a fun��o 'main'. A execu��o do programa come�a e termina ali.
//

#include <iostream>

#define MAX_VECTOR_SIZE 10

void alterar(int* vec)
{
    for (int i = 0; i < MAX_VECTOR_SIZE; i += 2)
    {
        vec[i] *= 100;
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

    alterar(vec);

    for (int i = 0; i < MAX_VECTOR_SIZE; i++)
    {
        std::cout << vec[i] << std::endl;
    }

    free(vec);
}
