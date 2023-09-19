#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 32

struct contato{
    char nome[50];    
    char tel[20];     
    char email[50];  
};

// Função para criar um novo contato com os dados fornecidos
struct contato *criaContato(char *nome, char *tel, char *email){
    struct contato *novo = (struct contato *)malloc(sizeof(struct contato));
    strncpy(novo->nome, nome, sizeof(novo->nome)); //Faz uma cópia de uma string contida na variável nome para a estrutura novo, no campo nome, usando a função strncpy. 
    strncpy(novo->tel, tel, sizeof(novo->tel)); //A função strncpy é usada para copiar a string nome para o campo nome da estrutura novo. O terceiro argumento, sizeof(novo->tel), especifica o tamanho máximo a ser copiado para evitar estouro de buffer.
    strncpy(novo->email, email, sizeof(novo->email));
    return novo; //A função retorna o ponteiro novo, que aponta para a nova estrutura de contato criada. Isso permite que o novo contato seja acessado e gerenciado em outras partes do programa.
}

// Função que calcula um valor hash a partir de uma string (para indexação na tabela hash)
int concatenacao(char *c){
    int key = 0, i = 0; //Duas variáveis são inicializadas: key é a variável que armazenará o valor da chave, inicializada com zero, e i é um contador inicializado com zero para percorrer os caracteres da string.
    while(c[i] != '\0'){ //Este é um loop while que executa enquanto o caractere atual da string c não for o caractere nulo ('\0'), que indica o final da string.
        key += c[i]; //Dentro do loop, a cada iteração, o valor numérico do caractere atual da string c (representado como um número inteiro) é adicionado à variável key. Isso acumula os valores numéricos de todos os caracteres na variável key, efetivamente concatenando os valores.
        i++; //O contador i é incrementado para passar para o próximo caractere na string.
    }
    return key; // Após o loop, a função retorna o valor calculado em key, que é a chave calculada a partir da string passada como argumento.
}

// Função que calcula o índice na tabela hash usando divisão
int funHashDiv(int key){
    return key % size; //Dentro da função, o operador % é usado para calcular o resto da divisão de key por size. Isso significa que a função retorna o valor resultante da operação de módulo.
}

// Definição do tipo 'agendaDeContatos' que é uma tabela hash de contatos
typedef struct contato *agendaDeContatos[size];

// Função para inserir um contato na tabela hash
int inserir(agendaDeContatos Hash, struct contato *c){
    int key = concatenacao(c->nome);  //Calcula uma chave (hash) usando o campo nome do contato c. Isso é feito chamando a função concatenacao, que soma os valores ASCII dos caracteres na string nome para gerar uma chave.
    key = funHashDiv(key); //Calcula o índice na tabela hash com base na chave calculada anteriormente usando a função funHashDiv. Essa função aplica a operação de módulo (%) para garantir que o índice esteja dentro dos limites da tabela hash.

    int key_inicio = key; //Verifica se a função está entrando em um loop infinito ao procurar um espaço vazio na tabela.

    while(1){ //Inicia um loop infinito, que será interrompido quando o contato for inserido com sucesso na tabela hash.
        if(Hash[key] == NULL){
            Hash[key] = c;  //Insere o contato no índice se estiver vazio
            break;
        }
        key++; //Se o índice key não estiver vazio, incrementa key para verificar a próxima posição da tabela hash.

        if(key_inicio == key){ //Verificação para evitar loops infinitos
            printf("Tabela cheia. Não foi possível inserir o contato.\n");
            return (0);
        }

        if(key >= size){ //Verificação para evitar que a tabela ultrapasse o tamanho máximo
            key = key % size;
        }
    }
    return (1);
}