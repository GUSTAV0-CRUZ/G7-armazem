# 📦 G7-Armazém 

![Language](https://img.shields.io/badge/Language-C-blue.svg)
![Algorithm](https://img.shields.io/badge/Algorithm-Bubble%20Sort-orange.svg)
![Platform](https://img.shields.io/badge/Platform-CLI-lightgrey.svg)
![License](https://img.shields.io/badge/License-MIT-green.svg)

## 📄 Sobre o Projeto

**G7-Armazém** é uma aplicação de linha de comando (CLI) desenvolvida em linguagem C para demonstrar a implementação e o funcionamento do algoritmo de ordenação **Bubble Sort**. O programa utiliza uma lista de produtos pré-definida e permite ao usuário reorganizá-la dinamicamente com base em diferentes critérios, como preço e código, tanto em ordem crescente quanto decrescente.

Este projeto serve como um estudo prático sobre algoritmos de ordenação, manipulação de estruturas de dados e desenvolvimento de aplicações interativas em C.

## 🛠️ Arquitetura e Conceitos Aplicados

O núcleo do projeto é a implementação do Bubble Sort para manipular uma estrutura de dados personalizada. A arquitetura foi desenhada de forma modular para isolar responsabilidades e facilitar o entendimento do código.

Os principais conceitos técnicos empregados são:

* **Algoritmo de Ordenação (Bubble Sort):** O projeto implementa quatro variações da função Bubble Sort. Cada função é especializada em ordenar a lista de produtos com base em um atributo específico (`preco` ou `codigo`) e em uma direção (crescente ou decrescente). Essa abordagem demonstra a flexibilidade do algoritmo e como ele pode ser adaptado para diferentes requisitos de negócio.

* **Estruturas de Dados (`struct`):** As informações de cada item são encapsuladas na `struct dadosProduto`, que agrupa múltiplos tipos de dados (código, nome, preço). O uso de `structs` é fundamental para que o algoritmo de ordenação possa manipular objetos complexos, trocando suas posições no array de forma atômica.

* **Modularização e Reuso de Código:** O sistema é construído sobre funções bem definidas, cada uma com uma responsabilidade clara:
    * **Funções de Ordenação:** Implementam a lógica do Bubble Sort.
    * **Funções de Interface:** Gerenciam a exibição de dados e a interação com o usuário.
    * **Funções de Validação:** Garantem que a entrada do usuário seja válida (números ou opções de menu), tornando a aplicação mais robusta.

* **Interface de Linha de Comando (CLI):** Toda a interação é conduzida por um menu de texto, onde o usuário seleciona as opções de ordenação e visualização. O fluxo do programa é controlado por um loop principal que permite ao usuário realizar múltiplas operações antes de encerrar a aplicação.

## 🎯 Funcionalidades Implementadas

* **Visualização de Dados:** Exibe a lista de produtos em seu estado original e após a ordenação.
* **Ordenação por Preço:** Organiza a lista de produtos do mais barato para o mais caro e vice-versa.
* **Ordenação por Código:** Organiza a lista com base no código do produto, em ordem crescente e decrescente.
* **Menu Interativo:** Oferece ao usuário um menu claro para escolher o critério de ordenação desejado.

## 👨‍💻 Autor

| [<img src="https://github.com/GUSTAV0-CRUZ.png" width="100px;"/><br /><sub><b>Gustavo Cruz</b></sub>](https://github.com/GUSTAV0-CRUZ) |
| :---: |

Projeto desenvolvido por Gustavo Cruz (GUSTAVO-CRUZ).
