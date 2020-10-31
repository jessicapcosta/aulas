#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char nome[61];
    printf("Qual o teu nome?");
    scanf("%s", nome);
    printf("O meu nome é %s." ,nome);
    getch();
    return 0;
}