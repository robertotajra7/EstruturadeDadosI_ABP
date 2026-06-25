#include <stdio.h>
#include "abp.h"

int main() {
    Node* raiz = NULL;
    int opcao, valor;

    printf("--- Simulador de Árvore Binaria de Pesquisa (ABP) ---\n");

    int valoresIniciais[] = {50, 30, 70, 20, 40, 60, 80};
    int n = sizeof(valoresIniciais) / sizeof(valoresIniciais[0]);
    
    printf("Inserindo valores automáticos para teste: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", valoresIniciais[i]);
        raiz = inserir(raiz, valoresIniciais[i]);
    }
    printf("\n");

    do {
        printf("\n================ MENU ================\n");
        printf("1. Inserir elemento\n");
        printf("2. Buscar elemento\n");
        printf("3. Mostrar percursos\n");
        printf("4. Visualizar estrutura da arvore\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor para inserir: ");
                scanf("%d", &valor);
                raiz = inserir(raiz, valor);
                break;
            case 2:
                printf("Digite o valor para buscar: ");
                scanf("%d", &valor);
                if (buscar(raiz, valor) != NULL) {
                    printf("Resultado: O elemento %d EXISTE na arvore.\n", valor);
                } else {
                    printf("Resultado: O elemento %d NAO foi encontrado.\n", valor);
                }
                break;
            case 3:
                printf("\nEm-Ordem: "); emOrdem(raiz);
                printf("\nPre-Ordem: "); preOrdem(raiz);
                printf("\nPos-Ordem: "); posOrdem(raiz);
                printf("\n");
                break;
            case 4:
                printf("\n--- Estrutura da Arvore ---\n");
                exibirArvore(raiz, 0);
                break;
            case 0:
                printf("Liberando memoria e encerrando...\n");
                liberarArvore(raiz);
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}