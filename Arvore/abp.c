#include <stdio.h>
#include <stdlib.h>
#include "abp.h"

Node* criarNo(int valor) {
    Node* novoNo = (Node*)malloc(sizeof(Node));
    if (novoNo == NULL) {
        printf("Erro: Falha na alocacao de memoria\n");
        exit(1);
    }
    novoNo->chave = valor;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    return novoNo;
}

Node* inserir(Node* raiz, int valor) {
    if (raiz == NULL) {
        return criarNo(valor);
    }
    if (valor < raiz->chave) {
        raiz->esquerda = inserir(raiz->esquerda, valor);
    } else if (valor > raiz->chave) {
        raiz->direita = inserir(raiz->direita, valor);
    } else {
        printf("Aviso: A chave %d ja existe (duplicadas nao permitidas).\n", valor);
    }
    return raiz;
}

Node* buscar(Node* raiz, int valor) {
    if (raiz == NULL || raiz->chave == valor) {
        return raiz;
    }
    if (valor < raiz->chave) {
        return buscar(raiz->esquerda, valor);
    }
    return buscar(raiz->direita, valor);
}

void emOrdem(Node* raiz) {
    if (raiz != NULL) {
        emOrdem(raiz->esquerda);
        printf("%d ", raiz->chave);
        emOrdem(raiz->direita);
    }
}

void preOrdem(Node* raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->chave);
        preOrdem(raiz->esquerda);
        preOrdem(raiz->direita);
    }
}

void posOrdem(Node* raiz) {
    if (raiz != NULL) {
        posOrdem(raiz->esquerda);
        posOrdem(raiz->direita);
        printf("%d ", raiz->chave);
    }
}

void exibirArvore(Node* raiz, int espaco) {
    int COUNT = 5;
    if (raiz == NULL) return;
    espaco += COUNT;
    exibirArvore(raiz->direita, espaco);
    printf("\n");
    for (int i = COUNT; i < espaco; i++) printf(" ");
    printf("%d\n", raiz->chave);
    exibirArvore(raiz->esquerda, espaco);
}

void liberarArvore(Node* raiz) {
    if (raiz != NULL) {
        liberarArvore(raiz->esquerda);
        liberarArvore(raiz->direita);
        free(raiz);
    }
}