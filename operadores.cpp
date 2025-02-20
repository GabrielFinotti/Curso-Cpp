#include <iostream>
#include <typeinfo>

/*
Operadores:
:: -> operador de resolução de escopo
++ -- -> operadores de incremento e decremento pós-fixados (direita para esquerda)
++ -- -> operadores de incremento e decremento pré-fixados (esquerda para direita)
+ - * / % -> operadores aritméticos (adição, subtração, multiplicação, divisão e módulo)
+ - -> operadores unários (positivo e negativo)
= -> operador de atribuição simples
+= -= *= /= %= -> operadores de atribuição composta (adição, subtração, multiplicação, divisão e módulo)
== != > < >= <= -> operadores de comparação (igual, diferente, maior, menor, maior ou igual, menor ou igual)
&& || ! -> operadores lógicos (e, ou, não)
& | ^ ~ << >> -> operadores bitwise (e, ou, ou exclusivo, negação, deslocamento à esquerda, deslocamento à direita)
, -> operador de vírgula (separador de instruções)
?: -> operador ternário (condição ? verdadeiro : falso)
sizeof -> operador que retorna o tamanho em bytes de um tipo de dado ou variável
typeid -> operador que retorna o tipo de dado de uma variável ou expressão
new -> operador que aloca memória dinamicamente
delete -> operador que desaloca memória alocada dinamicamente
*/

int main()
{
    // Operador de resolução de escopo
    std::cout << "Operador de resolução de escopo" << std::endl;

    // Operadores de incremento e decremento pós-fixados
    int a = 5;
    std::cout << "a++: " << a++ << std::endl; // 5
    std::cout << "a--: " << a-- << std::endl; // 6

    // Operadores de incremento e decremento pré-fixados
    std::cout << "++a: " << ++a << std::endl; // 6
    std::cout << "--a: " << --a << std::endl; // 5

    // Operadores aritméticos
    int b = 10;
    std::cout << "a + b: " << a + b << std::endl; // 15
    std::cout << "a - b: " << a - b << std::endl; // -5
    std::cout << "a * b: " << a * b << std::endl; // 50
    std::cout << "a / b: " << a / b << std::endl; // 0
    std::cout << "a % b: " << a % b << std::endl; // 5

    // Operadores unários
    std::cout << "+a: " << +a << std::endl; // 5
    std::cout << "-a: " << -a << std::endl; // -5

    // Operador de atribuição simples
    int c = 20;
    std::cout << "c: " << c << std::endl; // 20

    // Operadores de atribuição composta
    c += a;
    std::cout << "c += a: " << c << std::endl; // 25
    c -= a;
    std::cout << "c -= a: " << c << std::endl; // 20
    c *= a;
    std::cout << "c *= a: " << c << std::endl; // 100
    c /= a;
    std::cout << "c /= a: " << c << std::endl; // 20
    c %= a;
    std::cout << "c %= a: " << c << std::endl; // 0

    // Operadores de comparação
    std::cout << "a == b: " << (a == b) << std::endl; // 0
    std::cout << "a != b: " << (a != b) << std::endl; // 1
    std::cout << "a > b: " << (a > b) << std::endl;   // 0
    std::cout << "a < b: " << (a < b) << std::endl;   // 1
    std::cout << "a >= b: " << (a >= b) << std::endl; // 0
    std::cout << "a <= b: " << (a <= b) << std::endl; // 1

    // Operadores lógicos
    bool x = true, y = false;
    std::cout << "x && y: " << (x && y) << std::endl; // 0
    std::cout << "x || y: " << (x || y) << std::endl; // 1
    std::cout << "!x: " << (!x) << std::endl;         // 0

    // Operadores bitwise
    int d = 6;                                        // 110 in binary
    int e = 3;                                        // 011 in binary
    std::cout << "d & e: " << (d & e) << std::endl;   // 2
    std::cout << "d | e: " << (d | e) << std::endl;   // 7
    std::cout << "d ^ e: " << (d ^ e) << std::endl;   // 5
    std::cout << "~d: " << (~d) << std::endl;         // -7
    std::cout << "d << 1: " << (d << 1) << std::endl; // 12
    std::cout << "d >> 1: " << (d >> 1) << std::endl; // 3

    // Operador de vírgula
    int f = (a = 3, b = 4, a + b);
    std::cout << "f: " << f << std::endl; // 7

    // Operador ternário
    int g = (a > b) ? a : b;
    std::cout << "g: " << g << std::endl; // 4

    // Operador sizeof
    std::cout << "sizeof(a): " << sizeof(a) << std::endl; // 4

    // Operador typeid
    std::cout << "typeid(a).name(): " << typeid(a).name() << std::endl; // i

    // Operador new
    int *h = new int(5);
    std::cout << "*h: " << *h << std::endl; // 5

    // Operador delete
    delete h;

    return 0;
}