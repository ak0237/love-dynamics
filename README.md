# *Love Dynamics*

[artigo usado para verificar o resultado](https://educ.jmu.edu/~strawbem/Sample_Report.pdf)


Este repositório contém uma implementação do modelo de **dinâmica de amor de Romeu e Julieta**. Através desse modelo, buscou-se simular a interação entre os sentimentos de Romeu e Julieta ao longo do tempo, levando em consideração fatores internos (como o amor mútuo e a atração) e externos (como influências variáveis ou choques externos).

## Objetivo

O objetivo deste projeto é explorar e resolver numericamente o sistema de equações que descreve as relações entre as duas figuras centrais desse modelo dinâmico. Através da **método de Runge-Kutta de quarta ordem**, simulou-se como as emoções e o relacionamento entre Romeu e Julieta evoluem ao longo do tempo.

## Equações do Modelo

O modelo é baseado nas seguintes equações diferenciais:

$\frac{dR}{dt} = a \cdot R + b \cdot J$

$\frac{dJ}{dt} = c \cdot R + d \cdot J$

Onde:
- **R** representa o nível de amor de Romeu.
- **J** representa o nível de amor de Julieta.
- **a, b, c, d** são constantes que definem a intensidade da interação entre Romeu e Julieta.

Funções externas `e(t)` e `f(t)` podem ser adicionadas para representar influências externas variáveis ao longo do tempo (por exemplo, mudanças emocionais ou estresse externo).

## Instalação

### Requisitos

- GCC para compilação do código C
- Gnuplot para gerar os gráficos

### Como executar

1. Clone o repositório para o seu ambiente local:

    ```bash
    git clone https://github.com/ak0237/love-dynamics.git
    ```

2. Navegue até o diretório do projeto.

3. Permita a execução de scripts Shell:

    ```bash
    chmod +x bota.sh
    ```

4. Execute o programa:

    ```bash
    ./bota.sh
    ```

5. O programa gerará um arquivo de dados `ld.dat` na pasta `dat` contendo os resultados da simulação, com valores de `t`, `R(t)` e `J(t)`.

6. Na pasta `plt` seram gerados os gráficos.





