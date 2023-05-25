#include<stdio.h>

#define TAM 15
#define plina 2
#define Prof 3

typedef struct {
    char nome[30];
    char funcional[15];
    char titulo[20];
} Professor;

typedef struct {
    char nome[30];
    int carga_horaria;
    int cod;
    Professor professor_resp;
} Disciplina;

typedef struct {
    char nome[30];
    char matricula[10];
    int idade;
    Disciplina disciplina;
} Estudante;

int le_valida_idade();
char escolher();

int main() {
    int opc, sair;
    int i, d, e,j;

    Estudante estudante[TAM];
    Disciplina disciplina[plina];
    Professor professor[Prof];

    printf("|          CADASTRO         |\n");
    printf("|                           |\n");
    printf("|            ESCOLAR        |\n");

    printf("\n1: Area De Cadastro dos Professores");
    printf("\n2: Area De Cadastro das Disciplinas");
    printf("\n3: Area De Cadastro dos Alunos");
    printf("\n4: Cadastrar aluno na Disciplina 1");
    printf("\n5: Cadastrar aluno na Disciplina 2");
    printf("\n6: Professores");
    printf("\n7: Disciplinas");
    printf("\n8: Alunos\n");

    do {
        printf("\nEscolha qual opção você deseja:\n");
        scanf("%i", &opc);

        switch (opc) {
            case 1:
                printf("\n\n--- Cadastro de Professor ---\n");
                for (i = 0; i < Prof; i++) {
                    printf("\nNome: ");
                    scanf(" %s", professor[i].nome);
                    printf("\nFuncional: ");
                    scanf(" %s", professor[i].funcional);
                    printf("\nTitulação: ");
                    scanf(" %s", professor[i].titulo);
                    printf("\n---------\n");
                }
                break;

            case 2:
                printf("\n\n--- Cadastro de Disciplina ---\n");
                for (d = 0; d < plina; d++) {
                    printf("Nome: ");
                    scanf(" %s", disciplina[d].nome);
                    printf("Carga Horaria: ");
                    scanf("%d", &disciplina[d].carga_horaria);
                    printf("Codigo: ");
                    scanf("%d", &disciplina[d].cod);


                    printf("\n---------\n");
                }
                break;

            case 3:
                printf("\n\n--- Cadastro de estudantes ---\n");
                for (e = 0; e < TAM; e++) {
                    printf("\nNome aluno: ");
                    scanf(" %s", estudante[e].nome);
                    printf("Mat. aluno: ");
                    scanf(" %s", estudante[e].matricula);
                    estudante[e].idade = le_valida_idade();
                    printf("\n---------\n");
                }
                break;

            case 4:

            printf("Código da Disciplina | Nome do Professor | Nome do Estudante | Idade do Estudante\n");
            printf("\n-------------------- | ----------------- | ----------------- | -----------------\n");


                break;

            case 5:

            printf("Código da Disciplina | Nome do Professor | Nome do Estudante | Idade do Estudante\n");
            printf("-------------------- | ----------------- | ----------------- | -----------------\n");

                break;

            case 6:
                printf("\n--- Professores ---\n");
                for (i = 0; i < Prof; i++) {
                    printf("\nNome: %s", professor[i].nome);
                    printf("\nFuncional: %s", professor[i].funcional);
                    printf("\nTitulação: %s", professor[i].titulo);
                    printf("\n---------\n");
                }
                break;

            case 7:
                printf("\n--- Disciplinas ---\n");
                for (d = 0; d < plina; d++) {
                    printf("\nNome: %s", disciplina[d].nome);
                    printf("\nCarga Horária: %d", disciplina[d].carga_horaria);
                    printf("\nCodigo: %d", disciplina[d].cod);
                    printf("\nProfessor Responsavel: %s", disciplina[d].professor_resp.nome);
                    printf("\n---------\n");
                }
                break;

            case 8:
                printf("\n--- Alunos ---\n");
                for (e = 0; e < TAM; e++) {
                    printf("\nNome: %s", estudante[e].nome);
                    printf("\nIdade: %d", estudante[e].idade);
                    printf("\nMatricula: %s", estudante[e].matricula);
                    printf("\n---------\n");
                }
                break;

            default:
                printf("\nOpção inválida!\n");
                break;
        }

        printf("\n\nDigite 0 para continuar ou 1 para sair:\n");
        scanf("%i", &sair);

        if (sair == 0) {
            printf("\n|          CADASTRO         |\n");
            printf("|                           |\n");
            printf("|            ESCOLAR        |\n");

            printf("\n1: Area De Cadastro dos Professores");
            printf("\n2: Area De Cadastro das Disciplinas");
            printf("\n3: Area De Cadastro dos Alunos");
            printf("\n4: Cadastrar aluno na Disciplina 1");
            printf("\n5: Cadastrar aluno na Disciplina 2");
            printf("\n6: Professores");
            printf("\n7: Disciplinas");
            printf("\n8: Alunos\n");
        }
    } while (sair == 0);

    return 0;
}

int le_valida_idade() {
    int idade = 0, cont = 0;

    do {
        if (cont > 0) {
            printf("\nERRO - idade entre 16/26\n");
        }
        printf("\nidade:");
        scanf("%d", &idade);
        cont++;
    } while (idade < 16 || idade > 25);

    return idade;
}

char escolher() {
    int aux = 0;
    char escolha;

    do {
        if (aux > 0) {
            printf("Insira um número válido!");
        }

        printf("Escolha o professor: ");
        scanf(" %c", &escolha);
    } while (escolha != '1' && escolha != '2');

    return escolha;
}
