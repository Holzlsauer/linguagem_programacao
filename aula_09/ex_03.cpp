/* Criar um programa que atribua os de valores 
em variáveis para exibição na tela. 

- Nas respostas são criados um ponteiro e uma variável, então é atribuido um
valor para a variável e passado o seu endereço para o ponteiro. Então altera-se
o valor dentro do endereço contido no ponteiro através dele, e exibe na tela o
conteúdo da variável, que deve ter sido alterado através do ponteiro. */

#include <stdio.h>

int main() {
    int var;
    int *varPtr = NULL;

    var = 31146; // Atribui um valor para var
    varPtr = &var; // Atribui o endereço de var para varPtr
    *varPtr = 2020; // Altera o valor no endereço varPtr
    // Exibe o valor contido em var
    printf("O valor contido em var é: %d\n", var);

    return 0;
}