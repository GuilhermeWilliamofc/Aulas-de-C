/*
4. Criação dinâmica de um nó
Utilize a estrutura autorreferenciada abaixo:
typedef struct No {
int valor;
struct No *proximo;
} No;
Aloque um nó com malloc, leia um inteiro e armazene-o no campo valor. Defina proximo como NULL.
Imprima o valor armazenado e o endereço do nó; para o endereço, utilize %p e converta o ponteiro para
void *. Ao final, libere a memória.
*/
