// Tecnoservice-Curso.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

#define MAX_VECTOR_SIZE 10

void preencher_tamanho(int* tamanho)
{
    std::cout << "Entre com qtde de valores :";
    std::cin >> *tamanho;
}

void preencher(int **vec, int tamanho)
{
    *vec = (int*)malloc(tamanho * sizeof(int));
    memset(*vec, 0, tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++)
    {
        std::cout << "Entre com o valor: ";
        std::cin >> (*vec)[i];

        if ((*vec)[i] == 0)
        {
            break;
        }
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
    int *vec = NULL;
    int tamanho = 0;

    preencher_tamanho(&tamanho);
    preencher(&vec, tamanho);
    imprimir(vec, tamanho);

    free(vec);
}
