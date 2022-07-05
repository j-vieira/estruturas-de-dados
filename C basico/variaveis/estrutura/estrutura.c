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

    struct Contato contato;
    
    printf("Coloque o nome do contato:");
    scanf("%s", contato.nome);

    printf("Coloque o email do contato:");
    scanf("%s", contato.email);

    printf("Coloque o endereco comercial:");
    scanf("%s", contato.endereco.enderecoComercial);

    printf("Coloque o endereco residencial:");
    scanf("%s", contato.endereco.enderecoResidencial);

    printf("Nome: %s\nEmail:%s\nEndereço Comercial:%s\nEndereco Residencial:%s\n", contato.nome, contato.email, contato.endereco.enderecoComercial, contato.endereco.enderecoResidencial);
}