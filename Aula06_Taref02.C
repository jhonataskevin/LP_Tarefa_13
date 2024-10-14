#include <stdio.h>
#include <ctype.h>

int main(){

    int contador;
    char text[30];

    fgets(text, sizeof(text), stdin);

    for (int i=0; text[i]!='\0'; i++){
        char x=tolower(text[i]);
         if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
            contador++;
        }
        
    }

    printf("%d\n", contador);

    return 0;    
}
