#include<stdio.h>

int main()
{
	int numero = 0;
	
	printf("indique um numero inteiro\n");
	scanf("%d",&numero);
	if(numero > 5)
	{
		printf("o numero digitado e maior que 5\n");
	}
	else
	{
		printf("o numero digitado e menor que 5\n");
	}
	
	return(0);
}