
#include<stdio.h>
#include<stdlib.h>


void main(){

printf("Seu nome: Liliana Souza do Carmo\n");

int a;
int b;
double c;
double d;

a= 3;
b= 5;

printf("\nRealize operações com a e b: \n");

printf("\nSoma a+b= %d\n", a+b);
printf("\nSubtração a-b= %d\n", a-b);
printf("\nMultiplicação a*b= %d\n", a*b);

c= 3;
d= 5;

printf("\nDivisão c/d= %f\n", c/d);

double e;
double f;
double g;

e= 8;
f= 9;
g= 7;

printf("\nRealize a média aritmética dos números 8, 9 e 7: \n");
printf("\nResultado da média (e+f+g)/3= %f\n", (e+f+g)/3);

int num1;

printf("\nEscolha um número, para ser exibido na tela: ");
scanf ("%d", &num1);

int num2;


printf("\nEscolha um número para exibir seu antecessor: ");
scanf ("%d", &num2);

printf("\nAntecessor do número escolhido: %d", num2-1);

int num3;

printf("\nEscolha um número para exibir o seu Sucessor: ");
scanf ("%d", &num3);

printf("\nSucessor do número escolhido: %d\n", num3+1);

float num4;
float num5;
float num6;

printf("\nEscolha três números a seguir, para ser realizado a média aritmética: \n");

printf("\nPrimeiro:  ");
scanf("%f", &num4);

printf("\nSegundo: ");
scanf("%f", &num5);

printf("\nTerceiro: ");
scanf("%f",  &num6);

printf("\nMédia Aritmética: %f\n", (num4 + num5 + num6)/3);


int num7;
int num8;

printf("\nEscolha dois números inteiros para obter o dividendo, divisor, quociente e resto: ");

printf("\nDividendo: ");
scanf("%d", &num7);

printf("\nDivisor: ");
scanf("%d", &num8);

printf("\nQuociente: %d\n", num7/num8);
printf("\nResto: %d\n", num7%num8);

printf("\nEscolha a base e a altura de um triângulo, para ser definido a área do mesmo: ");

float num9;
float num10;

printf("\nBase: ");
scanf("%f", &num9);

printf("\nAltura: ");
scanf("%f", &num10);

printf("\nÁrea: %f\n", (num9*num10)/2);

printf("\nFIM! \n");







}
