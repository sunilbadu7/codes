#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'A': 
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a': 
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("The character is vowel"); break;
			default: printf("The character is consonant.");
						
	}
	return 0;
}

