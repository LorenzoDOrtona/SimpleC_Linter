#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 255
typedef struct righe_cod{
int num_riga;
int commented;
struct righe_cod* succ;
}righe_cod;
righe_cod*nodo_nuovo(int num_riga, int commented){
    righe_cod* nodo=(righe_cod*)malloc(sizeof(righe_cod));
    nodo->num_riga=num_riga;
    nodo->commented=commented;
    nodo->succ=NULL;
    return nodo;
}
righe_cod* Insert_in_testa(righe_cod * head,righe_cod* nuovo){
    if(head==NULL){
        return nuovo;
    }
    if(head!=NULL){
        nuovo->succ=head;
        return nuovo;
    }
}
int check_Slash_Ast(char* line)
{
    int c,k;
    c=getc(line);
    k=getc(line);

while(k!=NULL){
    if(c=='/ ' &&k =='/') return 1;
    if(c=='/' &&k =='*') return 2;

}
}
int check_commento(char* line,int num_riga,int slash_ast){
    if(slash_ast==1){
        
    }

}
int main(){
    //reads code from stdin
    int num_riga=0;
    int tot_righe=0;
    int num_righe_commentate=0;

    char *line = NULL;
    size_t len = 0;
    ssize_t read;

     while ((read = getline(&line, &len, stdin)) != -1) {
    num_riga++;
    tot_righe++;
    
    

}
}