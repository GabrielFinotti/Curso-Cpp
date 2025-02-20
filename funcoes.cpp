#include <iostream>

/*
Tipos de funções:

1. Função void (exibirMensagem):
   - Não retorna valores.
   - Serve apenas para executar instruções internas e finalizar, por exemplo imprimindo algo na tela.

2. Função que retorna valor (somar):
   - Recebe parâmetros e devolve um resultado específico.
   - Pode ser usada onde um valor for necessário, como em expressões ou atribuições.

3. Função recursiva (fatorial):
   - Chama a si mesma até chegar a uma condição de parada.
   - Ideal para problemas que podem ser decompostos em subproblemas menores, como cálculo de fatorial.

4. Função inline (quadrado):
   - Sugere ao compilador que expanda seu código em vez de criar uma chamada de função.
   - Geralmente aplicada a funções curtas, para possíveis melhorias de desempenho.

5. Funções sobrecarregadas (calcular):
   - Possuem o mesmo nome, mas parâmetros e comportamentos diferentes.
   - Útil para lidar com tipos ou quantidades diferentes de argumentos sem duplicar nomes.
*/

/*
Protótipos das funções:
- São declarações de funções que informam ao compilador sobre a existência de uma função antes de sua chamada.
- São necessários quando a função é definida após a função main.
- Podem ser colocados no início do código ou em um arquivo de cabeçalho (.h).
*/

// Protótipos das funções
void exibirMensagem();
int somar(int a, int b);
int fatorial(int n);
inline int quadrado(int x);
int calcular(int a);
double calcular(double a, double b);

int main()
{
    exibirMensagem();
    std::cout << "Somar: " << somar(3, 4) << std::endl;
    std::cout << "Fatorial de 5: " << fatorial(5) << std::endl;
    std::cout << "Quadrado de 6: " << quadrado(6) << std::endl;
    std::cout << "Calcular(int) com 3: " << calcular(3) << std::endl;
    std::cout << "Calcular(double) com 3.2 e 2.5: " << calcular(3.2, 2.5) << std::endl;

    return 0;
}

// Função void: não retorna valor
void exibirMensagem()
{
    std::cout << "Exemplo de função void." << std::endl;
}

// Função que retorna valor
int somar(int a, int b)
{
    return a + b;
}

// Função recursiva: calcula o fatorial
int fatorial(int n)
{
    if (n <= 1)
        return 1;
    return n * fatorial(n - 1);
}

// Função inline: calcula o quadrado
inline int quadrado(int x)
{
    return x * x;
}

// Função sobrecarregada: para um inteiro
int calcular(int a)
{
    return a * a;
}

// Função sobrecarregada: para dois double
double calcular(double a, double b)
{
    return a * b;
}