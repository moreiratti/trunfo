#include <stdio.h>

int main(){
 printf("DESAFIO SUPER TRUNFO\n");
 printf("Aqui você irá criar as suas cartas\n");
 printf("By: Kauan Moreira \n");

 //variaveis primeira carta
 char estado1 [10]; 
 char codigo1 [5]; 
 char nome1 [10];
 unsigned long int populacao1; 
 int Pontosturisticos1;
 float area1;
 float pib1;
 float DensidadePopulacional1;
 float PibPerCapita1;
 float Inverso1;
 float SuperPoder1;
 int ResultadoPopulação, ResultadoPoder, ResultadoÁrea, ResultadoPib, ResultadoDensidadePopulacional, ResultadoPontosTuristicos, ResultadoPibPerCapita;

 printf(" *** Cadastro 1 Carta *** \n");
 
 printf("Digite o estado: \n");
 scanf("%s", estado1);

 printf("Digite o código (A01-HO4): \n");
 scanf("%s", codigo1);
 
 printf("Digite o nome da cidade: \n");
 scanf("%s", nome1);

 printf("Digite a população: \n");
 scanf("%lu", &populacao1);

 printf("Digite a quantidade de Pontos Turisticos: \n");
 scanf("%d", &Pontosturisticos1);

 printf("Digite a Área da cidade: \n");
 scanf("%f", &area1);

 printf("Digite O PIB: \n");
 scanf("%f", &pib1);


 //calculos de Densidade Populacional e Pib Per Capita
 DensidadePopulacional1 = (float)(populacao1 / area1);
 printf("A Densidade Populacional é: %f \n", DensidadePopulacional1);
 PibPerCapita1 = (float)(pib1 / populacao1);
 printf("O Pib per Capita é: %f \n", PibPerCapita1);

  //calculos para Super Poder 1
 Inverso1 = (DensidadePopulacional1 / 1 );
 SuperPoder1 = (float)(populacao1 + area1 + pib1 + Pontosturisticos1 + PibPerCapita1 + Inverso1 );



 //variaveis segunda carta
 char estado2 [10]; 
 char codigo2 [5]; 
 char nome2 [10];
 unsigned long int populacao2; 
 int Pontosturisticos2;
 float area2;
 float pib2;
 float DensidadePopulacional2;
 float PibPerCapita2;
 float Inverso2;
 float SuperPoder2;

  printf(" *** Cadastro 2 Carta *** \n");
 
 printf("Digite o estado: \n");
 scanf("%s", estado2);

 printf("Digite o código (A01-HO4): \n");
 scanf("%s", codigo2);
 
 printf("Digite o nome da cidade: \n");
 scanf("%s", nome2);

 printf("Digite a população: \n");
 scanf("%lu", &populacao2);

 printf("Digite a quantidade de Pontos Turisticos: \n");
 scanf("%d", &Pontosturisticos2);

 printf("Digite a Área da cidade: \n");
 scanf("%f", &area2);

 printf("Digite O PIB: \n");
 scanf("%f", &pib2);

 //calculos de Densidade Populacional e Pib Per Capita
 DensidadePopulacional2 = (float)(populacao2 / area2);
 printf("A Densidade Populacional é: %f \n", DensidadePopulacional2);
 PibPerCapita2 = (float)(pib2 / populacao2);
 printf("O Pib per Capita é: %f \n", PibPerCapita2);

 //calculos para Super Poder 2
 Inverso2 =(DensidadePopulacional2 / 1 );
 SuperPoder2 = (float)(populacao2 + area2 + pib2 + Pontosturisticos2 + PibPerCapita2 + Inverso2);

  // CARTA 1 COMPLETA
 printf(" === PRIMEIRA CARTA === \n");
 printf("Super Poder: %f\n", SuperPoder1);
 printf("Estado: %s\n", estado1);
 printf("Código: %s\n", codigo1);
 printf("Cidade: %s\n", nome1);
 printf("População: %lu\n", populacao1);
 printf("Pontos Turísticos: %d\n", Pontosturisticos1);
 printf("Área: %f\n", area1);
 printf("PIB: %f\n", pib1); 
 printf("Densidade Populacional: %f\n", DensidadePopulacional1); 
 printf("PIB per Capita: %f\n", PibPerCapita1); 
 printf(" ====================== \n");

 // CARTA 2 COMPLETA
 printf(" === SEGUNDA CARTA === \n");
 printf("Super Poder: %f\n", SuperPoder2);
 printf("Estado: %s\n", estado2);
 printf("Código: %s\n", codigo2);
 printf("Cidade: %s\n", nome2);
 printf("População: %lu\n", populacao2);
 printf("Pontos Turísticos: %d\n", Pontosturisticos2);
 printf("Área: %f\n", area2);
 printf("PIB: %f\n", pib2);
 printf("Densidade Populacional: %f\n", DensidadePopulacional2); 
 printf("PIB per Capita: %f\n", PibPerCapita2);
 printf(" ====================== \n");

  // COMPARAÇÃO DE CARTAS 
  printf(" ======================================================================= \n");
  printf(" *** Aqui irá sair o comparativo das cartas *** \n");
  printf("Explicação: Resultado (1) ponto carta 1, Resultado (0) ponto carta 2\n");
  printf(" ======================================================================= \n");

 
 printf("O Super Poder da carta 1 é maior (1) ou menor(0) que o Super Poder da carta 2: %.1f\n", SuperPoder1 > SuperPoder2);
 printf("A População da carta 1 é maior (1) ou menor (0) que a População da carta 2: %.1lu\n", populacao1 > populacao2);
 printf("A Área da carta 1 é maior(1) ou menor (0) que a Área da carta 2: %.1f\n", area1 > area2 );
 printf("O PIB da carta 1 é maior (1) ou menor (0) que o PIB da carta 2: %.1f\n", pib1 > pib2);
 printf("A cidade da carta 1 tem mais (1) ou menos (0) Pontos Turisticos que a cidade da carta 2: %d\n", Pontosturisticos1 > Pontosturisticos2);
 printf("A Densidade Populacional da carta 1 é menor (1) ou maior (0) que a Densidade Populacional da carta 2: %.1f\n", DensidadePopulacional1 < DensidadePopulacional2);
 printf("O PIB per Capita da cidade da carta 1 é maior (1) ou menor (0) que o Pib per Capita da carta 2 %.1f\n", PibPerCapita1 > PibPerCapita2);
 



















}