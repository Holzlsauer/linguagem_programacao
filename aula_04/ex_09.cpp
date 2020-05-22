#include <stdio.h>
#include <math.h>

int converter(int numero, int tipo) {
    int count = 0;
    int aux = numero;

    /* Passa o numero para um var auxilar "aux" e inicia o contador "count" do 
    "tamanho" decimal, ou binario do valor inserido. Verifica quantas vezes o 
    numero aux e divisivel por 10 e registra isso em count */
    do {
        aux /= 10;
        count++;
    } while (aux != 0);

    /* Cria uma string auxiliar do tamanho count e converte o numero de int para
    essa string auxiliar */
    char aux_str[count];
    // http://www.cplusplus.com/reference/cstdio/snprintf/
    snprintf(aux_str, count+1, "%d", numero);

    // -------------------------- Conversoes ----------------------------------
    if (tipo == 1) // bin -> dec
    {
        /* Inicia o resultado em 0, e soma nele as potencias de 2, vezes os 0 e 
        1 binarios armazenados na aux_str */
        int resultado = 0;
        for (int i = 0; i < count ; i++)  {
            resultado += (int)pow(2,i) * ((int)aux_str[i] - 48);
        }
        printf("O numero %d em decimal e: %d\n", numero, resultado);
    }
    else // dec -> bin
    {
        printf("O numero %d em decimal e: ", numero);
        for (int i = count-1; i >= 0; i--)  {
            printf("%d", numero/(int)pow(2,i));
            numero = numero % (int)pow(2,i);
        }
        printf("\n");
    }
    return 0;
}

int main() {
    int tipo;
    int valor;

    printf("Informe que tipo de converao deseja realizar:\n");
    printf("(1 - Binario -> Decimal / 2 - Decimal -> Binario): ");
    scanf("%d", &tipo);
    fflush(stdin);
    printf("Informer o valor a ser convertido: ");
    scanf("%d", &valor);
    converter(valor, tipo);
}