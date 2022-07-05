#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct Aluno{
        char nome[4];
        int idade;
        struct Aluno *enderecoAluno;
    }; 

struct TurmaAluno{
        int turma;
        struct Aluno *aluno;
        struct TurmaAluno *proximo;
};

int main(){
    
    struct Aluno alunos[3];

    strcpy(alunos[0].nome, "JOAO");
    alunos[0].idade=5;

    strcpy(alunos[1].nome, "LEO");
    alunos[1].idade=8;

    strcpy(alunos[2].nome, "LAIZ");
    alunos[2].idade=9;
    
    size_t tamanhoAluno = sizeof(alunos)/sizeof(alunos[0]);

    printf("\n");
    for(int i = 0; i<tamanhoAluno; i++){
        printf("Nome do aluno %d:%s\nIdade do aluno %d:%d\n\n", i+1, alunos[i].nome, i+1, alunos[i].idade);
    }

    struct TurmaAluno turmasAluno[4];

    turmasAluno[0].turma = 1;
    turmasAluno[0].aluno = &(alunos[0]);    
    turmasAluno[0].proximo = &(turmasAluno[1]);

    turmasAluno[1].turma = 1;
    turmasAluno[1].aluno = &(alunos[1]);
    turmasAluno[1].proximo = &(turmasAluno[2]);

    turmasAluno[2].turma = 2;
    turmasAluno[2].aluno = &(alunos[1]);
    turmasAluno[2].proximo = &(turmasAluno[3]);

    turmasAluno[3].turma=3;
    turmasAluno[3].aluno = &(alunos[2]);
    turmasAluno[3].proximo = NULL;

    size_t tamanhoAlunos = sizeof(alunos)/sizeof(alunos[0]);

    for(int j=0; j<tamanhoAlunos; j++){
        printf("Endereco estrutura Aluno %d: %p\n", j, &(alunos[j]));
        printf("Endereco estrutura TurmaAluno %d: %p\n", j, &(turmasAluno[j]));
        printf("\n");
    }

    struct TurmaAluno* L = &(turmasAluno[0]);
    printf("Endereco do primeiro elemento de TurmaAluno, L:%p\n", L);
}