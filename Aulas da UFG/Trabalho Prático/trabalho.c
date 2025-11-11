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
- Baixo: menor que 10 m³;
- Médio: entre 10 e 20 m³;
- Alto: acima de 20 m³.
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

void coletarConsumo(int num_de_apartamentos, int valores_de_consumo[]){ // tem o numero de apartamentos e o vetor como parametro
    int contador;
    int valor_temporario; // esse valor temporario serve para guardar o valor digitado durante a validação dos dados

    for (contador = 0; contador < num_de_apartamentos; contador++){
        do {
            printf("Digite o valor de consumo (em litros) do apartamento %d: ", contador + 1);
            scanf("%d", &valor_temporario); // vai guardar o valor de consumo digitado pelo usuario
        } while (valor_temporario < 0); // o loop vai ocorrer enquanto o usuario digitar um valor negativo

        valores_de_consumo[contador] = valor_temporario; // se sair do loop significa que o valor digitado eh valido então guarda esse valor no vetor
    }
}

int main(){
    int opcao, num_de_apartamentos;

    printf("Bem-vindo ao Analisador de Consumo de Agua do Condominio\n"); // Mensagem de boas vindas

    printf("Digite o numero total de apartamentos: ");
    scanf("%d", &num_de_apartamentos);

    int valores_de_consumo[num_de_apartamentos]; // o vetor foi criado aqui para ter o mesmo tamanho do número de apartamentos

    do{
        printf("[ 1 ] - Cadastrar consumo dos apartamentos\n");
        printf("[ 4 ] - Sair\n"); // opção de sair

        printf("Sua Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1){
            coletarConsumo(num_de_apartamentos, valores_de_consumo);
        }
    } while (opcao != 4); // enquanto a opção de sair do programa não for escolhida o loop vai continuar
}