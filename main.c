#include <stdio.h>
#include <string.h>

void minuscula(char s[]);

typedef struct _CARTA {
    int numero;
    char tipo[20];
    char resposta[20];
    char dica1[128];
    char dica2[128];
    char dica3[128];
    char dica4[128];
    char dica5[128];
    char dica6[128];
    char dica7[128];
    char dica8[128];
    char dica9[128];
    char dica10[128];
} CARTA;

int main(void) {
    char a[64] = "freddie", chute[64];
    puts("Chute um nome de cantor: ");
    scanf("%s",chute);
    minuscula(chute);
    if(strcmp(a,chute)==0){
        printf("Acertô, mirezávi.");
    }
    else{
        printf("Erroooou!");
    }
    return 1;
}

void minuscula(char s[]) {
   int c = 0;
   while (s[c] != '\0') {
        if (s[c] >= 'A' && s[c] <= 'Z') {
            s[c] = s[c] + 32;
        }
        c++;
    }
}
