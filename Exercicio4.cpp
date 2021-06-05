#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{

    int num[11]; 
    int peso1[12]={5,4,3,2,9,8,7,6,5,4,3,2};
    int peso2[12]={6,5,4,3,2,9,8,7,6,5,4,3};
    int resultado [12];
    int total = 0, resto = 0;
    int digito1, digito2;
    char aux[11];
    int auxiliaratoi;

	printf ("Digite o numero do CNPJ: ");
    for (int i= 0; i<12; i++)
	{
        do 
		{ 
            aux[0] = getch();
        	if ( aux[0] >= '0' && aux[0] <= '9') 
			{
            	printf("%c", aux[0]);
            	auxiliaratoi = atoi (aux);
        	}
		}
		while (aux[0] < '0' || aux[0] > '9');
		num[i]= auxiliaratoi;
	}
	printf("\n");
	

	for (int i=0;i<12; i++)
	{
		resultado[i] = num[i] * peso1[i];	
		total += resultado[i];
	}
	resto = total % 11;
	
	if (resto < 2)
	{
		digito1 = 0;
	}
	else
	{
		digito1 = 11-resto;
	}
	
	
	
	total = 0;
	resto = 0;
	
	for (int i=0; i<12; i++)
	{
		resultado[i] = num[i] * peso2[i];	
		total += resultado[i];
	}
	
	total += digito1 * 2;
	resto = total % 11;
	
	
	if (resto < 2)
	{
		digito2 = 0;
	}
	else
	{
		digito2 = 11-resto;
	}
	
	printf ("\nPrimeiro digito: %d \nSegundo digito: %d", digito1,digito2);
	printf("\n");
    system ("pause");
    return 0;
}

