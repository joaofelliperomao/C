typedef struct No{
    char valor;
    struct No* proximo_No
}No;

No* no(char valor, No* proximo_No)
void inserir_no(No* H, No* no);
void imprimir_lista(No* H);
int quantidade_nos(No* H);
No* copiar_lista(No* H);
void liberar_lista(No* H);
