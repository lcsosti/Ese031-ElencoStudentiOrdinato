#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisci le costanti
#define N 3
#define MAX_STRLEN 30
// Definisci il tipo di dato struct s_studente
truct s_studente{
    char nome[MAX_STRLEN];
    char cognome[MAX_STRLEN];
    unsigned int eta;
    char classe[MAX_STRLEN];
};
// Definisci studente come struct s_studente
typedef struct s_studente studente;

// Dichiara il prototipo della funzione di ordinamento
void SelectionCognomi(studente v[], int n);

int main(int argc, char** argv) {
    // Dichiara le variabili locali
    int i;
    studente elenco[N];
    
    // Codice per la stampa dei dati (uno studente per riga)
    for(i=0;i<N;i++){
        printf("Inserisci il nome: ",i+1);
        scanf("%s", (elenco[i].nome));
        printf("Inserisci il cognome: ",i+1);
        scanf("%s", (elenco[i].cognome));
        printf("Inserisci la eta': ",i+1);
        scanf("%d", &(elenco[i].eta));
        printf("Inserisci la classe: ",i+1);
        scanf("%s", (elenco[i].classe));
    }
    return (EXIT_SUCCESS);
}
SeleCognome(elenco,N) //Ordinatore Elenco

// Definisci la funzione di ordinamento
void SeleCognome(studente v[],int n){
    int i,minore,j;
    studente scambio;
    
    for(i=0;i<n-1;i++){
        minore=i;
        
        for(j=i+1;j<n;j++){
            if(strcmp(v[j].cognome,v[minore].cognome)<0){
                minore=j;
            }
        }
        
        scambio=v[i];
        v[i]=v[minore];
        v[minore]=scambio;
    }
}

