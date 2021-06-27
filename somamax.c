#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Digite o valor n de elementos inteiros do vetor:\n");
    int n=0;
    scanf("%d", &n);
    if (n>=3 && n<=20){
        int vetor[n];
        printf("Digite cada elemento inteiro do vetor, separando-os com um espaco e no final aperte enter.\n");
        for(int i=0;i<n;i++){
           scanf("%i", &vetor[i]);
        }
        int vetordeinformacoes[3] = {0,0,0}/*o primeiro e segundo elementos definem o range dos índices e o terceiro a soma máxima*/, somaaux = 0;

        for(int firstinrange=0;firstinrange<n;firstinrange++){
            for(int lastinrange=firstinrange; lastinrange<n;lastinrange++){
                somaaux+=vetor[lastinrange];
                if(somaaux > vetordeinformacoes[2]){
                    vetordeinformacoes[0] = firstinrange+1;
                    vetordeinformacoes[1] = lastinrange+1;
                    vetordeinformacoes[2] = somaaux;
                }
            }
            somaaux=0;
        }
        printf("Soma: %d\nIndices: %d a %d", vetordeinformacoes[2], vetordeinformacoes[0],vetordeinformacoes[1]);
    }else{
        printf("O numero de n elementos deve ser maior ou igual a 3 e menor ou igual a 20");
    }
    return 0;
}
