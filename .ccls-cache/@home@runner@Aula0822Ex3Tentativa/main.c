#include<stdio.h>
//#include<stdlib.h>
#include<string.h>

struct Aluno{
  int matricula;
  char nome[100];
  double n1;
  double n2;
  double n3;
  double nMed;
};

//declaração funções
int maiorNota1 (struct Aluno aluno[]);
int maiorMedia (struct Aluno aluno[]);
int menorMedia (struct Aluno aluno[]);
int aprovacao (struct Aluno aluno[]);


int main (void)
{
  struct Aluno aluno[5];
  int i;

  //recebe as infos dos alunos
  for(i = 0; i < 5; i++){
    printf("\nInformações do aluno %d\n", i+1);
    printf("\nNumero de matrícula: ");
    scanf("%d", &aluno[i].matricula);
    printf("Nome: ");
    getchar();
    fgets(aluno[i].nome, 100, stdin);
    printf("Primeira nota: ");
    scanf("%lf", &aluno[i].n1);
    printf("Segunda nota: ");
    scanf("%lf", &aluno[i].n2);
    printf("Terceira nota: ");
    scanf("%lf", &aluno[i].n3);
    aluno[i].nMed = (aluno[i].n1 + aluno[i].n2 + aluno[i].n3) / 3;
    printf("Média de notas: %g\n", aluno[i].nMed);
    printf("\n------------------------------\n");
  }

  //fuincionamento da função maior nota 1
  int maMN = maiorNota1(aluno);
  printf("\n---------- MAIOR NOTA ----------\n");
  for(i = 0; i < 5; i++){
    if(aluno[i].matricula == maMN){
      printf("A maior nota pertence ao aluno %s", aluno[i].nome);
    }
  }
  return 0;
}

//funções em si
int maiorNota1 (struct Aluno aluno[]){
  int i;
  int maMN;
  double nMaior = 0;

  for(i = 0; i < 5; i++){
    if(aluno[i].n1 > nMaior){
      maMN = aluno[i].matricula;
    }
  }
  return maMN;
}

/*2) Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da
terceira prova.
a. Permita ao usuário entrar com os dados de 5 alunos.
b. Encontre o aluno com maior nota da primeira prova.
c. Encontre o aluno com maior média geral.
d. Encontre o aluno com menor média geral
e. Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.

OBS: Para os itens do b ao e crie uma função para cada item.*/