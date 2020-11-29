
#include<stdio.h>
int main()
{
	int i, x, soma=0;
	float media;
	printf("coloque 10 numeros\n");
	for (x = 1; x <= 10; ++x)
	{
		printf("valor %d: ", x);
		scanf_s("%d", &i);
		soma += i;
	}
	printf(" a soma e %d\n", soma);
	media = soma/ 10.0;
	printf(" a media e %.1f\n", media);
	do
	{
		printf("valor:");
		scanf_s("%d", &i);
	}
	while (i != 0);
	
}