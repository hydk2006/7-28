# include <stdio.h>
int main()
{
	char c[10] = { 'H','e','l','l','o', 'w','o','r','l','d'};
	int i;
	for(i=0; i<10;i++)
		printf("%c", c[i]);
	printf("\n");
		return 0;
}