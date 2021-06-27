#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=0;
    printf("Digite o numero inteiro n de dimensoes do quadrado magico, de\nmodo que n seja maior ou igual a 3 e menor ou igual a 6: ");
    while(n<3 || n>6){
        scanf("%i", &n);
    }
    int soma=0;
    soma = n*(n*n +1)/2;
    if(n%2 != 0){
        int qmagico[n][n];
        int i=0, j=n/2;
        for (int k=1; k<=n*n; k++){
            qmagico[i][j] = k;
            i--;
            j++;
            if (k%n == 0){
                i += 2;
                j--;
            }else{
                if (j==n){
                    j -= n;
                    }else if (i<0){
                        i += n;
                    }
            }
        }

        printf("\nn = %i, Soma = %i\n", n, soma);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                printf("%i ", qmagico[i][j]);
            }
            printf("\n");
        }


    }else if(n%4 == 0){
        int qmagico[n][n];
        int i=0,j=0;
        for ( i = 0; i<n; i++){
            for (j = 0; j<n; j++){
            qmagico[i][j] = (n*i) + j + 1;
            }
        }
        for ( i = 0; i<n/4; i++){
            for ( j = 0; j<n/4; j++){
                qmagico[i][j] = (n*n + 1) - qmagico[i][j];
            }
        }

        for ( i = 0; i< n/4; i++){
            for ( j = 3* (n/4); j<n; j++){
                qmagico[i][j] = (n*n + 1) - qmagico[i][j];
            }
        }

        for ( i = 3* n/4; i<n; i++){
            for ( j = 0; j<n/4; j++){
                qmagico[i][j] = (n*n + 1) - qmagico[i][j];
            }
        }

        for ( i = 3* n/4; i<n; i++){
            for ( j = 3* n/4; j<n; j++){
                qmagico[i][j] = (n*n + 1) - qmagico[i][j];

            }
        }

        for ( i = n/4; i<3* n/4; i++){
            for ( j = n/4; j<3* n/4; j++){
                qmagico[i][j] = (n*n + 1) - qmagico[i][j];
            }
        }

        printf("\nn = %i, Soma = %i\n", n, soma);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                printf("%i ", qmagico[i][j]);
            }
            printf("\n");
        }


    }else{
        int h= n/2;
        int matrizA[h][h];
        int matrizB[h][h];
        int matrizC[h][h];
        int matrizD[h][h];
        int i=0, j=h/2;

        for (int k=1; k<=h*h; ++k){
            matrizA[i][j] = k;
            i--;
            j++;
            if (k%h == 0){
                i += 2;
                j--;
            }else{
                if (j==h){
                    j -= h;
                    }else if (i<0){
                        i += h;
                    }
            }
        }

        for(i=0;i<n/2;i++){
            for(j=0;j<n/2;j++){
                matrizB[i][j] = matrizA[i][j]+18;
            }
        }
        for(i=0;i<n/2;i++){
            for(j=0;j<n/2;j++){
                matrizC[i][j] = matrizA[i][j]+27;
            }
        }
        for(i=0;i<n/2;i++){
            for(j=0;j<n/2;j++){
                matrizD[i][j] = matrizA[i][j]+9;
            }
        }

        printf("\nn = %i, Soma = %i\n", n, soma);
        for(i=0;i<n/2;i++){
            for(j=0;j<n/2;j++){
                printf(" %i ",matrizA[i][j]);
            }
            for(j=0;j<n/2;j++){
                printf("%i ",matrizB[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<n/2;i++){
            for(j=0;j<n/2;j++){
                printf("%i ",matrizC[i][j]);
            }
            for(j=0;j<n/2;j++){
                printf("%i ",matrizD[i][j]);
            }
            printf("\n");
        }

    }
    return 0;
}
