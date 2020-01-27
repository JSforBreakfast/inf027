/*Questão 01 Lista Prof. Luiz Machado

Escreva um programa que receba como entrada a idade de um cão,
em anos, e seu porte e exiba a sua idade humana correspondente.

 IDADE |Porte P||Porte M||Porte G|
  1    |   5   ||   6   ||   8   |
  3    |  21   ||   19  ||   23  | 
  5    |  26   ||   32  ||   38  |
      

*/

#include <stdio.h>
#include <string.h>

int main()
{
    int idade, idadeReal;
    
    char porte[25];
    
    printf("Informe a idade do pet:\n");
    scanf("%d", &idade);
    printf("Informe o porte do pet (pequeno, médio, grande):\n");
    scanf(" %s", porte);
    
    if(strcmp(porte, "pequeno") == 0){
        
        idadeReal = idade * 5;
        
    }else if(strcmp(porte, "médio") == 0){
        
        idadeReal = idade * 6;
        
    }else if(strcmp(porte, "grande") == 0){
        
        idadeReal = idade * 8;
        
    }

    printf("A idade real do pet é de %d.", idadeReal);

    return 0;
}
