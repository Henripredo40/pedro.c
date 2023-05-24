#include<stdio.h>
#include<locale.h>

#define TAM 15
#define plina 2
#define Prof 3



   typedef struct{

    char nome[30];
    char funcional[15];
    char titulo[20];
    }Professor;

    typedef struct{
        char nome[30];
        int carga_horaria;
        int cod;
        Professor professor_resp;

    }Disciplina;

   typedef struct {
        char nome[30];
        char matricula[10];
        int idade;
        Disciplina disciplina;
    }Estudante;


    int le_valida_Idade();




int main(){

        setlocale(LC_ALL,"PORTUGUESE");


        int opc,sair;

        int i,d,e;

        Estudante estudante [0];
        Disciplina disciplina [0];
        Professor professor [0];




    printf("|          CADASTRO         |\n");
    printf("|                           | \n");
    printf("|            ESCOLAR        |     \n");

    printf(" \n1: Area De Cadastro dos Professores ");
    printf("\n2 : Area De Cadastro das Disciplinas ");
    printf("\n3 : Area De Cadastro dos Alunos");
    printf("\n4 : Cadastrar aluno na Disciplina 1");
    printf("\n5 : cadastrar aluno na Disciplina 2");
    printf("\n6 : Professores ");
    printf("\n7 : Diciplinas ");
    printf("\n8 : Alunos\n");





        do{




    printf("\nEscolha qual opçoes Você deseja:\n");
    scanf("%i",&opc);



        switch(opc){

        case 1:

       printf("\n\n--- Cadastro de Professor --- \n");
        for(i= 0; i<Prof; i++){
        printf("\nNome: ");
        fflush(stdin);
        scanf(" %s", &professor[i].nome);
        printf("\nFuncional: ");
        fflush(stdin);
        scanf(" %i", &professor[i].funcional);
        printf("\nTitulaçao: ");
        fflush(stdin);
        scanf(" %s", &professor[i].titulo);
        fflush(stdin);
        printf("\n---------\n");
        professor[i].nome = escolher();

    }

        break;

        case 2:

         printf("\n\n--- Cadastro de Disciplina --- \n");
        for(d=0;d<plina; d++){
        printf("Nome: ");
        scanf(" %s", disciplina[d].nome);
        fflush(stdin);
        printf("Carga Horaria: ");
        scanf(" %i", &disciplina[d].carga_horaria);
        fflush(stdin);
        printf("Codigo: ");
        scanf(" %i", &disciplina[d].cod);
        fflush(stdin);
        printf("\n---------\n");

    }
        break;

        case 3:


        printf("\n\n--- Cadastro de estudantes --- \n");
        for(e=0;e<TAM;e++){
        printf("\nNome aluno:");
        scanf(" %s",&estudante[e].nome);
        fflush(stdin);
		printf("\nMat. aluno:");
        scanf(" %i",&estudante[e].matricula);
        fflush(stdin);
		estudante[e].idade = le_valida_idade();
		printf("\n---------\n");
        fflush(stdin);


    }

        break;

        case 4:







        break;

        case 5:

        break;

        case 6:

        for(i= 0; i<Prof; i++){



        printf("\nNome : %s",professor[i].nome);
        printf("\nFuncional: %i",professor[i].funcional);
        printf("\nTitulaçao: %s",professor[i].titulo);
        printf("\n---------\n");






        }
        break;

        case 7:

         for(d=0;d<plina; d++){

        printf("\nNome : %s",disciplina[d].nome);
        printf("\nCarga Horária: %i",disciplina[d].carga_horaria);
        printf("\nCodigo : %i",disciplina[d].cod);
        printf("\nProfessor Responsavel: %s",disciplina[d].professor_resp);
        printf("\n---------\n");
         }

        break;

        case 8:

         for(e=0;e<TAM;e++){
            printf("\nNome : %s",estudante[e].nome);
            printf("\nidade : %i",estudante[e].idade);
            printf("\nMatricula: %i",estudante[e].matricula);
            printf("\n---------\n");




         }

break;

        default:
        printf("\n Opçâo Invalida!\n");

        break;

        }


        printf("\n\nDigite 0 para continuar , ou 1 para sair:\n");
        scanf("%i",&sair);

        if(sair == 0){

       printf("\n|          CADASTRO         |\n");
    printf("|                           | \n");
    printf("|            ESCOLAR        |     \n");

    printf(" \n1 : Area De Cadastro dos Professores ");
    printf("\n2 : Area De Cadastro das Disciplinas ");
    printf("\n3 : Area De Cadastro dos Alunos");
    printf("\n4 : Cadastrar aluno na Disciplina 1");
    printf("\n5 : cadastrar aluno na Disciplina 2");
    printf("\n6 : Professores ");
    printf("\n7 : Diciplinas ");
    printf("\n8 : Alunos\n");
        }


        }while(sair == 0);

}

int le_valida_idade(){

	int idade=0,cont=0;

	do{
		if(cont>0){
			printf("\nERRO - idade entre 16/26\n");
		}
		printf("\nidade:");
		scanf(" %i", &idade);
		cont++;
	}while(idade < 16 || idade > 25);

	return idade;
}


char escolher(){

 int aux = 0;
 char escolha;

 do{
    if(aux>0){

    printf("Insira Um NUmero valido!");

    }

    printf("Escolha o professor :");
    scanf(" %s",&escolha);

 }while(escolha == 1 || escolha == 2);


}
