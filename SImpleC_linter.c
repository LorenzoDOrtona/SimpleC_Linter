#include <stdio.h>
#include <string.h>
int main(){
    FILE* codefile; //we read the code from stdin
    codefile=fopen(stdin,"r");
    char parola[30];
    strcpy(fscanf(codefile,"%s"),parola);
    printf("\n%s",parola);


}