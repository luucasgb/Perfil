#include <stdio.h>
#include <string.h>

void minuscula(char s[]) {
   int c = 0;
   while (s[c] != '\0') {
        if (s[c] >= 'A' && s[c] <= 'Z') {
            s[c] = s[c] + 32;
        }
        c++;
    }
}

int main(void){
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