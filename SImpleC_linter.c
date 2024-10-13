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
    return head;
}
int check_Slash_Ast(char* line,int len) //nella linea cerco simboli
{
    int c,k;
for(int i=0;i<len-1;i++){
    c=line[i];
    k=line[i+1];
    if(c=='/' &&k =='/') return 1;
    if(c=='/' &&k =='*') return 2;
    if(c=='*' &&k =='/') return 3;
}
return 0;
}
int check_commento(char* line,int len,int slash_ast){//ti dice se non c'è, c'è comm o c'è commento lungo
    if(slash_ast==0){// se non sono dentro un commento lungo
        return check_Slash_Ast(line,len);
    }
    return check_Slash_Ast(line,len);
}
int main(){
    //reads code from stdin
    int num_riga=0;
    int tot_righe=0;
    int num_righe_commentate=0;
    int slash_ast=0;//verifica se siamo dentro un lungo commento
    righe_cod*lista_r_comm=NULL;    
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

     while ((read = getline(&line, &len, stdin))!=-1 ) {
    num_riga++;
    tot_righe++;
    //if si credo nodo e aggiungo
    int check=check_commento(line,len,slash_ast);
    if(check!=0){//ho un commento nornale
        Insert_in_testa( lista_r_comm,nodo_nuovo(num_riga,check));
        num_righe_commentate++;
    }
}
printf("\nHai commenti in %d righe su %d righe totali\n", num_righe_commentate, tot_righe);
double percent=num_righe_commentate/tot_righe;
(percent<(1/4))? printf("\nHai pochi commenti!Dovresti aggiungerne!"):printf("\nBravo, hai tanti commenti!!");
}