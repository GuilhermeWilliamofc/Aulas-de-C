/* Desenvolver uma aplicação que coleta o consumo de água de vários apartamentos, classifica o nível de consumo e calcula estatísticas como média, maior e menor consumo. 

Conceitos utilizados: vetores (armazenamento dos dados de consumo), condicionais (classificação dos consumos), funções (estatísticas), busca por extremos. 

Objetivo: Realizar a análise de dados residenciais de forma automatizada, reforçando o uso de vetores e lógica condicional.

Consumo mensal em L (Litros)

Coleta de dados = perguntar aos usuários

Usar vetor para armazenar o dado de X apartamentos ou um número informado pelo usuário

Separar o consumo em: Baixo, Moderado e Alto

Média simples do consumo de todos os AP's

Ap com maior consumo e o com menor

Ter menuzinho, indicando ao usuário como funciona o Software, empresa ficticia...

Requisitos do Cliente
Desenvolver uma solução prática para monitorar o consumo de água em um condomínio. O sistema deve ser simples, intuitivo e acessível para moradores e administradores. A interface precisa conter:
- Nome do condomínio;
- Opções de serviços disponíveis;
- Campos para inserção dos consumos;
- Exibição organizada dos resultados, com estatísticas e classificações.

Sequência da Interface
1. Exibir um menu inicial com a mensagem: 'Bem-vindo ao Analisador de Consumo de Água
do Condomínio [Nome]'.
2. Solicitar o número total de apartamentos.
3. Permitir a inserção do consumo de cada apartamento.
4. Processar os dados e exibir os resultados de forma organizada.

Funções Implementadas e Suas Aplicações
1. coletarConsumo
- Entrada: número de apartamentos.
- Processo: armazena os valores de consumo em um vetor, garantindo que nenhum valor
negativo seja aceito.
2. classificarConsumo
- Entrada: vetor com os consumos.
- Processo: classifica o consumo de cada apartamento em:
- Baixo: menor que 10 m³; 10000 litros
- Médio: entre 10 e 20 m³; 10000 e 20000 litros
- Alto: acima de 20 m³. acima de 20000 litros
- Saída: retorna ou exibe a classificação de cada apartamento juntamente com o valor
consumido.
3. calcularMediaConsumo
- Processo: soma todos os valores do vetor e divide pela quantidade de apartamentos.
- Saída: retorna a média de consumo do condomínio.
4. encontrarExtremos
- Processo: percorre o vetor de consumos para identificar o maior e o menor consumo.
- Saída: exibe os valores extremos acompanhados do número do apartamento
correspondente.
5. gerarRelatorioFinal
- Processo: utiliza os resultados das funções anteriores.
- Saída: gera um relatório completo com:
- Consumo por apartamento;
- Classificação de cada unidade;
- Média geral do condomínio;
- Apartamentos com maior e menor consumo.
*/

#include <stdio.h>

typedef struct {
    float consumo;
} Apartamento;

void coletarConsumo(int num_andares, int num_apts_por_andar, Apartamento valores_de_consumo[][num_apts_por_andar]){ // tem o numero de apartamentos e o vetor como parametro
    int andar, apt;
    float valor_temporario; // esse valor temporario serve para guardar o valor digitado durante a validação dos dados

    for (andar = 0; andar < num_andares; andar++){
        for (apt = 0; apt < num_apts_por_andar; apt++){
            do {
                printf("Digite o valor de consumo (em litros) do andar %d, apto %d: ", andar + 1, apt + 1);
                scanf("%f", &valor_temporario); // vai guardar o valor de consumo digitado pelo usuario
                if (valor_temporario <= 0){
                    printf("Erro! Digite um valor maior que 0!\n"); // caso o usuario digite um valor negativo ou nulo (vulgo zero)
                }
            } while (valor_temporario <= 0); // o loop vai ocorrer enquanto o usuario digitar um valor negativo ou um valor nulo (vulgo zero)

            valores_de_consumo[andar][apt].consumo = valor_temporario; // se sair do loop significa que o valor digitado eh valido então guarda esse valor no vetor
        }
    }
}

void classificarConsumo(int num_andares, int num_apts_por_andar, Apartamento valores_de_consumo[][num_apts_por_andar]){ // tem o numero de apartamentos e o vetor como parametro
    int andar, apt;

    for (andar = 0; andar < num_andares; andar++){
        printf("\nAndar %d:\n", andar + 1);
        for (apt = 0; apt < num_apts_por_andar; apt++){
            printf("O consumo do andar %d, apto %d eh: ", andar + 1, apt + 1);
            if (valores_de_consumo[andar][apt].consumo < 10000){
                printf("Baixo"); // consumo baixo
            }
            else if (valores_de_consumo[andar][apt].consumo >= 10000 && valores_de_consumo[andar][apt].consumo <= 20000){
                printf("Medio"); // consumo medio
            }
            else if (valores_de_consumo[andar][apt].consumo > 20000){
                printf("Alto"); // consumo alto
            }
            printf("\nValor Consumido: %.2f litros\n", valores_de_consumo[andar][apt].consumo);
        }
    }
}

float calcularMediaConsumo(int num_andares, int num_apts_por_andar, Apartamento valores_de_consumo[][num_apts_por_andar]){
    int andar, apt;
    float soma_total = 0;
    float total = num_andares * num_apts_por_andar;
    for (andar = 0; andar < num_andares; andar++){
        for (apt = 0; apt < num_apts_por_andar; apt++){
            soma_total += valores_de_consumo[andar][apt].consumo;
        }
    }
    return soma_total / total;
}

void encontrarExtremos(int num_andares, int num_apts_por_andar, Apartamento valores_de_consumo[][num_apts_por_andar]){
    int num_apart_menor, num_apart_maior, andar, apt, num_andar_menor, num_andar_maior;
    float maior, menor;

    for (andar = 0; andar < num_andares; andar++){
        for (apt = 0; apt < num_apts_por_andar; apt++){
            if (andar == 0 && apt == 0){
                menor = valores_de_consumo[andar][apt].consumo;
                maior = valores_de_consumo[andar][apt].consumo;
                num_apart_menor = apt + 1;
                num_apart_maior = apt + 1;
                num_andar_menor = andar + 1;
                num_andar_maior = andar + 1;
            }
            else{
                if (valores_de_consumo[andar][apt].consumo < menor){
                    menor = valores_de_consumo[andar][apt].consumo;
                    num_apart_menor = apt + 1;
                    num_andar_menor = andar + 1;
                }
                else if (valores_de_consumo[andar][apt].consumo > maior){
                    maior = valores_de_consumo[andar][apt].consumo;
                    num_apart_maior = apt + 1;
                    num_andar_maior = andar + 1;
                }
            }
        }
    }

    printf("O apartamento de menor consumo foi o Andar %d, Apto %d, que teve o consumo de %.2f litros\n", num_andar_menor, num_apart_menor, menor);
    printf("O apartamento de maior consumo foi o Andar %d, Apto %d, que teve o consumo de %.2f litros\n", num_andar_maior, num_apart_maior, maior);
}

void gerarRelatorioFinal(int num_andares, int num_apts_por_andar, Apartamento valores_de_consumo[][num_apts_por_andar]){
    float media;

    printf("\nRelatorio do Condominio:");
    printf("\nConsumo e classificacao por apartamento:\n");
    classificarConsumo(num_andares, num_apts_por_andar, valores_de_consumo);
    printf("\nMedia geral do condominio:");
    media = calcularMediaConsumo(num_andares, num_apts_por_andar, valores_de_consumo);
    printf("\nA media de consumo do condominio eh: %.2f litros\n", media);
    printf("\nApartamentos com maior e menor consumo:\n");
    encontrarExtremos(num_andares, num_apts_por_andar, valores_de_consumo);
    printf("\n");
}

int main(){
    int opcao, num_andares, num_apts_por_andar;
    float media;

    printf("Bem-vindo ao Analisador de Consumo de Agua do Condominio\n"); // Mensagem de boas vindas

    do{
        printf("Digite o numero total de andares: ");
        scanf("%d", &num_andares);
        if (num_andares <= 0){
            printf("Erro! Digite um valor maior que 0!\n"); // caso o usuario digite um valor negativo ou nulo (vulgo zero)
        }
    } while (num_andares <= 0);

    do{
        printf("Digite o numero total de apartamentos por andar: ");
        scanf("%d", &num_apts_por_andar);
        if (num_apts_por_andar <= 0){
            printf("Erro! Digite um valor maior que 0!\n"); // caso o usuario digite um valor negativo ou nulo (vulgo zero)
        }
    } while (num_apts_por_andar <= 0);

    Apartamento valores_de_consumo[num_andares][num_apts_por_andar]; // o vetor foi criado aqui para ter o mesmo tamanho do número de apartamentos

    coletarConsumo(num_andares, num_apts_por_andar, valores_de_consumo); // obrigar o usuario a digitar os valores de consumo antes do menu para evitar do vetor ter lixo de memoria

    do{
        printf("[ 1 ] - Cadastrar consumo dos apartamentos\n");
        printf("[ 2 ] - Classificar consumo dos apartamentos\n");
        printf("[ 3 ] - Verificar a media de consumo do condominio\n");
        printf("[ 4 ] - Identificar os apartamentos de maior e menor consumo\n");
        printf("[ 5 ] - Gerar Relatorio Final\n");
        printf("[ 6 ] - Sair\n"); // opção de sair

        printf("Sua Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1){
            coletarConsumo(num_andares, num_apts_por_andar, valores_de_consumo);
        }
        else if (opcao == 2){
            classificarConsumo(num_andares, num_apts_por_andar, valores_de_consumo);
        }
        else if (opcao == 3){
            media = calcularMediaConsumo(num_andares, num_apts_por_andar, valores_de_consumo);
            printf("A media de consumo do condominio eh: %.2f litros\n", media);
        }
        else if (opcao == 4){
            encontrarExtremos(num_andares, num_apts_por_andar, valores_de_consumo);
        }
        else if (opcao == 5){
            gerarRelatorioFinal(num_andares, num_apts_por_andar, valores_de_consumo);
        }
        else if (opcao != 6) {
            printf("Erro! Digite uma opcao valida!\n");
        }
    } while (opcao != 6); // enquanto a opção de sair do programa não for escolhida o loop vai continuar
    printf("Fim do Programa\n");
}