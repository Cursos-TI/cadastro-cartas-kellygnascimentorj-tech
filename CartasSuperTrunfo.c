#include <stdio.h>

int main() {

char estado [50];
char código [3];
char cidade [50];
int população;
float áreakm²;
float Pib;
int NúmerodePontosTurísticos;

printf("O nome do estado é: \n" );
scanf( "%s", estado);
printf("O estado é: %s \n", estado);

printf( "O codigo é: \n" );
scanf( "%s", código);
printf( "O código é: %s \n", código);

printf( "A cidade é: \n" );
scanf( "%s", cidade);
printf( "A cidade é: %s \n", cidade);

printf( "A população é: \n" );
scanf( "%d", &população);
printf( "A população é: %d \n", população);

printf( "A área em km² é: \n" );
scanf( "%f", &áreakm²);
printf( "A área em km² é: %.2f \n", áreakm²);

printf( "O PIB é: \n" );
scanf( "%f", &Pib);
printf( "O PIB é: %.2f \n", Pib);

printf( "O número de pontos turísticos é: \n" );
scanf( "%d", &NúmerodePontosTurísticos);
printf( "O número de pontos turísticos é: %d \n", NúmerodePontosTurísticos);

printf("%s\n", estado);
printf("%s\n", código);
printf("%s\n", cidade);
printf("%d\n", população);
printf("%.2f\n", áreakm²);
printf("%.2f\n", Pib);
printf("%d\n", NúmerodePontosTurísticos);

printf("Cadastro realizado com sucesso!\n\n");


char estado2 [50];
char codigo2 [3];
char cidade2 [50];
int população2 ;
float áreakm²2 ;
float Pib2 ;
int NúmerodePontosTurísticos2 ;

printf("O nome do estado é: \n" );
scanf( "%s", estado2);
printf("O estado é: %s \n", estado2);

printf( "O codigo é: \n" );
scanf( "%s", codigo2);
printf( "O código é: %s \n", codigo2);

printf( "A cidade é: \n" );
scanf( "%s", cidade2);
printf( "A cidade é: %s \n", cidade2);

printf( "A população é: \n" );
scanf( "%d", &população2);
printf( "A população é: %d \n", população2);

printf( "A área em km² é: \n" );
scanf( "%f", &áreakm²2);
printf( "A área em km² é: %.2f \n", áreakm²2);

printf( "O PIB é: \n" );
scanf( "%f", &Pib2);
printf( "O PIB é: %.2f \n", Pib2);

printf( "O número de pontos turísticos é: \n" );
scanf( "%d", &NúmerodePontosTurísticos2);
printf( "O número de pontos turísticos é: %d \n", NúmerodePontosTurísticos2);   

printf("%s\n", estado2);
printf("%s\n", codigo2);
printf("%s\n", cidade2);
printf("%d\n", população2); 
printf("%.2f\n", áreakm²2);
printf("%.2f\n", Pib2);
printf("%d\n", NúmerodePontosTurísticos2);

printf("Cadastro realizado com sucesso!\n");



return 0;}   