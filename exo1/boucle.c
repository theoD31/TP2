#include <stdio.h>
#include <stdlib.h>
#include <math>

int main() {
	
// Somme des n premiers entiers positifs:

	int i = 0; 
	int n = 0;
	int s = 0;

		printf("Donner un entier positif n : ");
		scanf_s("%d", &n);

		for (i = 1; i <= n; i++)
		{
			s = s + i;
		}

		printf("\nLa somme des %d premiers entier positifs est : %d", n, s);
		
		// somme des n premiers entiers positifs avec la boucle for 

		s = 0;
		i = 0;
		while (i<=n)
		{ 
			s = s + i;
			i++;
		}

		printf("\nLa somme des %d premiers entiers positifs est : %d", n, s);

		// somme des n premiers entiers positifs avec la boucle while

		s = 0;
		i = 0;
		do 
		{ 
			s = s + i;
			i++;
		} while (i<=n);

		printf("\nLa somme des %d premiers entiers positifs est : %d", n, s);

		// somme des n premiers entiers positifs avec la boucle do while

// Trouver la valeur maximum de n sans dépassement de capacité :

		int b;
		unsigned short int a = 0;
		b = sizeof(a);
		while ()
		





}