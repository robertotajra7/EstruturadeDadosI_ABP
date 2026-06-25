# Trabalho III – Estrutura de Dados

## Disciplina

Estrutura de Dados

## Tema

Implementação de aplicações práticas utilizando a estrutura de dados Árvore Binária de Pesquisa (ABP).

## Aplicações Desenvolvidas

### 1. Árvore Binária de Pesquisa – Sistema de Indexação e Busca de Chaves

Foi desenvolvido um sistema interativo que simula a indexação de chaves numéricas em um banco de dados relacional. Cada registro inserido é organizado de maneira hierárquica na árvore, permitindo buscas, visualização da ordenação e percursos estruturais.

Características:

* Inserção dinâmica de elementos respeitando a propriedade da árvore (menores à esquerda, maiores à direita).
* Busca binária eficiente com tempo de execução otimizado.
* Exibição da estrutura hierárquica no terminal de forma gráfica (rotacionada em 90 graus).
* Execução dos três percursos clássicos (Em-Ordem, Pré-Ordem e Pós-Ordem).
* Liberação segura de memória através de percurso pós-ordem.

---

## Estrutura do Projeto

Trabalho-III/
├── Arvore/
│   ├── abp.h
│   ├── abp.c
│   └── main.c
├── .gitignore
└── README.md

---

## Compilação

### Árvore

gcc main.c abp.c -o programa_abp

---

## Execução

### Árvore

./programa_abp