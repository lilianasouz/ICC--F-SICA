#include<stdlib>
#include<stdio>

void main(){
//minha variável nunca pode começar com número  
int a;
int b1;
int lili;
double d;


a = 2;
b1 = 4; //o símbolo igual é receber
d= 3.1;
printf("Soma a + b1 = %d", a + b1) 
printf("\nD= %f", d); //%f representar número real
b1= 6;
printf(\nNova soma a+b1= %d\n", a+b1) //\n pular linha
lili= a+2*b1+1
printf(\nNova soma a+b1= %d\n", lili);



printf("Digite um valor:");
scanf("%d", &a)//& usa para endereçar o a [scanf("%d", &a)] uma forma de determinar valores 
printf("exiba 2*a: %d\n", 2*a)
}

//int(inteiro)
//double(número real)
//char(caractere)
//bool(unidade lógica, sim ou não, um ou zero)
