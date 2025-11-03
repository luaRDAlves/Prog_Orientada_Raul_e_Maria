# Análise orientada a objeto
> [!NOTE]
> A **análise** orientada a objeto consiste na descrição do problema a ser tratado, duas primeiras etapas da tabela abaixo, a definição de casos de uso e a definição do domínio do problema.

## Descrição Geral do domínio do problema

O domínio do problema é o jogo de cartas "Pife" (também conhecido como Pif Paf ou Cacheta). Trata-se de um jogo de baralho para dois ou mais jogadores, onde o objetivo principal é formar "jogos" (combinações) e "bater", ou seja, esvaziar a mão de cartas.

As entidades centrais do domínio são:

    Jogo (Partida): Gerencia o estado geral da partida, o turno dos jogadores e as regras de vitória.

    Jogador: O participante que possui uma "mão", toma decisões (comprar, descartar) e baixa combinações.

    Carta: A entidade fundamental, definida por um Naipe (Paus, Ouros, Copas, Espadas) e um Valor (Ás a Rei).

    Baralho: Uma coleção de cartas. No Pife, o domínio é dividido em dois baralhos principais: o Monte (de onde se compra) e o Lixo (onde se descarta).

    Combinação (Jogo Baixado): Um conjunto de cartas que formam um jogo válido, podendo ser uma Trinca (três ou mais cartas de mesmo valor) ou uma Sequência (três ou mais cartas do mesmo naipe em ordem).

Requisitos Funcionais (RF)

    RF01: O sistema deve permitir que 2 (ou mais) jogadores iniciem uma partida.

    RF02: O sistema deve usar dois baralhos (104 cartas), embaralhá-los e distribuir 9 cartas para cada jogador.

    RF03: O sistema deve virar uma carta do monte para iniciar a pilha de lixo.

    RF04: O sistema deve permitir que o jogador da vez compre a carta do topo do monte OU a carta do topo do lixo.

    RF05: O sistema deve permitir que o jogador descarte uma carta de sua mão para o lixo ao final do seu turno.

    RF06: O sistema deve permitir que o jogador "baixe" combinações válidas (trincas ou sequências) em sua área de jogo.

    RF07: O sistema deve detectar a condição de vitória ("Bater") quando um jogador, após descartar, ficar sem cartas na mão.

Requisitos Não-Funcionais (RNF)

    RNF01: O jogo deve ser executado em uma interface de linha de comando (console).

    RNF02: O código deve ser escrito em C++ e seguir os paradigmas da Programação Orientada a Objetos (modularidade, encapsulamento, etc.).

    RNF03: O sistema deve ser capaz de gerenciar o estado do jogo de forma consistente, sem permitir jogadas inválidas.

## Diagrama de Casos de Uso

 ![Diagrama de casos de uso](https://github.com/user-attachments/assets/381f344a-85d4-4837-a339-b7c3be367a31)

 
## Diagrama de Domínio do problema

Elaborar um diagrama conceitual do domínio do problema.


<div align="center">

[Retroceder](README.md) | [Avançar](projeto.md)

</div>
