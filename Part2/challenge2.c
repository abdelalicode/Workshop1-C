#include <stdio.h>

int main(void)
{
	char lettre;

	printf("Entrer la lettre: ");
	scanf("%c", &lettre);

	if ((lettre >= 65 && lettre <= 90) || (lettre >= 97 && lettre <= 122))
	{
		switch (lettre) {
			case 'a':
				printf("La lettre est une voyelle\n");
				break;
			case 'e':
				printf("La lettre est une voyelle\n");
				break;
			case 'i':
				printf("La lettre est une voyelle\n");
				break;
			case 'o':
				printf("La lettre est une voyelle\n");
				break;
			case 'u':
				printf("La lettre est une voyelle\n");
				break;
			case 'y':
				printf("La lettre est une voyelle\n");
				break;
			/** case 'A':
				printf("La lettre est une voyelle\n");
				break;
			case 'E':
				printf("La lettre est une voyelle\n");
				break;
			case 'I':
				printf("La lettre est une voyelle\n");
				break;
			case 'O':
				printf("La lettre est une voyelle\n");
				break;
			case 'U':
				printf("La lettre est une voyelle\n");
				break;
			case 'Y':
				printf("La lettre est une voyelle\n");
				break; */
			default:
				printf("La lettre n'est pas une voyelle\n");
		}
	}
	else 
		printf("Vous n'avez pas entré une lettre\n");

	return 0;
}


