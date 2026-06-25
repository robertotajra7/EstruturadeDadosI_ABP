#ifndef ABP_H
#define ABP_H

// Definição da estrutura do nó da árvore
typedef struct Node {
    int chave;
    struct Node* esquerda;
    struct Node* direita;
} Node;

// Protótipos das funções principais
Node* criarNo(int valor);
Node* inserir(Node* raiz, int valor);
Node* buscar(Node* raiz, int valor);

// Protótipos dos percursos
void emOrdem(Node* raiz);
void preOrdem(Node* raiz);
void posOrdem(Node* raiz);

// Utilitários
void exibirArvore(Node* raiz, int espaco);
void liberarArvore(Node* raiz);

#endif 