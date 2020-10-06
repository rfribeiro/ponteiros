// Tecnoservice-Curso.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

#define MAX_VECTOR_SIZE 10

int main()
{
    int* vec = NULL;
    vec = (int*)malloc(MAX_VECTOR_SIZE * sizeof(int));

    memset(vec, 0, MAX_VECTOR_SIZE * sizeof(int));

    for (int i = 0; i < MAX_VECTOR_SIZE; i++)
    {
        vec[i] = 10 * i;
        *(vec + i) = 10 * i;
        std::cout << &vec[i] << " : " << (vec + i) << std::endl;
    }

    for (int i = 0; i < MAX_VECTOR_SIZE; i++)
    {
        std::cout << vec[i] << std::endl;
    }

    free(vec);
}
