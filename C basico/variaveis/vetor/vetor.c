#include <stdio.h>

int main(){
    struct Endereco{
        char enderecoComercial[64];
        char enderecoResidencial[64];
    };

    struct Contato{
        char nome[64];
        char email[32]; 
        struct Endereco endereco;
    };

    struct Contato contato[3];

    size_t quantidadeContatos = sizeof(contato)/sizeof(contato[0]);

    for(int i=0; i<3; i++){

        printf("Coloque o nome do contato:");
        scanf("%s", contato[i].nome);

        printf("Coloque o email do contato:");
        scanf("%s", contato[i].email);

        printf("Coloque o endereco comercial:");
        scanf("%s", contato[i].endereco.enderecoComercial);

        printf("Coloque o endereco residencial:");
        scanf("%s", contato[i].endereco.enderecoResidencial);
        
        printf("\n");
    }

    for(int i=0; i<3; i++){
        printf("\n");
        printf("Contato %d:\n", i);
        printf("Nome: %s\nEmail:%s\nEndereço Comercial:%s\nEndereco Residencial:%s\n", contato[i].nome, contato[i].email, contato[i].endereco.enderecoComercial, contato[i].endereco.enderecoResidencial);
    }
}