#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
using namespace std;

const int facil = 5;
const int medio = 5;
const int dificil = 5;
const int jedi = 5;


const int dicafacil = 5;
const int dicamedio = 5;
const int dicadificil = 5;
const int dicajedi = 5;


char banco01[facil][30]={
"carro",
"gato",
"celular",
"cavalo",
"rodizio"};
char banco02[medio][30]{
"sensual",
"violino",
"rato",
"movimento",
"divorcio",};
char banco03[dificil][30]{
"automatico",
"androide",
"motorizado",
"antagonico",
"corcunda",};
char banco04[jedi][30]{
"Filantropo",
"Cordyceps",
"Juvenilizante",
"Prognóstico",
"Putrefato",};


char dicasfacil [dicafacil][30]{
"usado para movimento",
"um animal de 4 patas",
"dispositivo de comunicação",
"um animal do interior",
"muita comida",
};
char dicasmedio [dicamedio][30]{
"atraente e...",
"Instrumento Musical",
"Animal de esgoto",
"Estado fisico",
"Quando o amor acaba",
};
char dicasdificil [dicadificil][30]{
"Carros possuem esse modo",
"Futurismo",
"algo com engrenagens",
"inimigo do protagonista",
"Postura não saúdavel",
};
char dicasjedi [dicajedi][30]{
"usados para pessoas ricas",
"Fungo popular pelo controle",
"Ato de parecer mais jovem",
"Relátorio médico",
"corpo humano após a morte",
};


char dica_sort[30];
char dica_dig[30];
char palavra_sort[30];
char palavra_dig[30];


int Sortfacil(){
    srand(time(NULL));
    return rand() % (facil);
};
int Sortmedio(){
    srand(time(NULL));
    return rand() % (medio);
};
int Sortdificil(){
    srand(time(NULL));
    return rand() % (dificil);
};
int Sortjedi(){
    srand(time(NULL));
    return rand() % (jedi);
};


void MostraPalavra(){
    cout<<"\n     "<<strlen(palavra_sort)<<" letras \n\n    ";
    for(int i=0;i < strlen(palavra_sort) ;i++){
        cout<<palavra_dig[i]<<" ";
    }
}
void MostraDica(){
    cout << "\n\n\n Dica:  " << dica_sort;
}

void copiadicafacil(int ind){
    for(int i=0;i<30;i++){
        dica_sort[i] = dicasfacil[ind][i];
    }
}
void copiadicamedio(int ind){
    for(int i=0;i<30;i++){
        dica_sort[i] = dicasmedio[ind][i];
    }
}
void copiadicadificil(int ind){
    for(int i=0;i<30;i++){
        dica_sort[i] = dicasdificil[ind][i];
    }
}
void copiadicajedi(int ind){
    for(int i=0;i<30;i++){
        dica_sort[i] = dicasjedi[ind][i];
    }
}


void copiafacil(int ind){
    for(int i=0;i<30;i++){
        palavra_sort[i] = banco01[ind][i];
    }
}
void copiamedio(int ind){
    for(int i=0;i<30;i++){
        palavra_sort[i] = banco02[ind][i];
    }
}
void copiadificil(int ind){
    for(int i=0;i<30;i++){
        palavra_sort[i] = banco03[ind][i];
    }
}
void copiajedi(int ind){
    for(int i=0;i<30;i++){
        palavra_sort[i] = banco04[ind][i];
    }
  }


void limpapalavra(){
    for(int i=0;i < strlen(palavra_sort);i++){
        palavra_dig[i] = '_';
    }
}
void mostraforca(int let_erro){
    switch(let_erro){
         case 0:
            cout<<"  _____ "<<endl;
            cout<<" |      "<<endl;
            cout<<" |      "<<endl;
            cout<<" |      "<<endl;
            cout<<" |      "<<endl;
            break;
        case 1:
            cout<<"  _____ "<<endl;
            cout<<" |    O "<<endl;
            cout<<" |      "<<endl;
            cout<<" |      "<<endl;
            cout<<" |      "<<endl;
            break;
        case 2:
            cout<<"  _____ "<<endl;
            cout<<" |    O "<<endl;
            cout<<" |    | "<<endl;
            cout<<" |      "<<endl;
            cout<<" |      "<<endl;
            break;
        case 3:
            cout<<"  _____ "<<endl;
            cout<<" |    O "<<endl;
            cout<<" |   /| "<<endl;
            cout<<" |      "<<endl;
            cout<<" |      "<<endl;
            break;
        case 4:
            cout<<"  _____ "<<endl;
            cout<<" |    O "<<endl;
            cout<<" |   /|\\"<<endl;
            cout<<" |      "<<endl;
            cout<<" |      "<<endl;
            break;
        case 5:
            cout<<"  _____ "<<endl;
            cout<<" |    O "<<endl;
            cout<<" |   /|\\"<<endl;
            cout<<" |   /  "<<endl;
            cout<<" |      "<<endl;
            break;
        case 6:
            cout<<"  _____ "<<endl;
            cout<<" |    O "<<endl;
            cout<<" |   /|\\"<<endl;
            cout<<" |   / \\"<<endl;
            cout<<" |       "<<endl;
            break;
    }
}
bool verificaletra(char letra, char vetor[26]){
    for(int i=0;i<strlen(vetor);i++){
        if(letra==vetor[i]){
            return true;
        }
    }
    return false;
}
void substitui(char letra){
    for(int i=0;i<strlen(palavra_sort);i++){
        if(palavra_sort[i]==letra){
            palavra_dig[i] = letra;
        }
    }

}
void MostraLetra(char letras[], int tam){
    cout<<"\n\n Letras digitadas: ";
    for(int i=0;i < tam ;i++){
        cout<<letras[i]<<", ";
    }
    cout<<"\n";
}
bool palavracompleta(){
    for(int i=0;i<strlen(palavra_sort);i++){
        if(palavra_dig[i]=='_'){
            return false;
        }
    }
    return true;
}


int main(){
  
int dificulty;
int cont_let_dig=0;
int cont_erros=0;
char letras_digitadas[26];
char letra;

cout << "Olá, Selecione uma dificuldade para prosseguir:\n" << endl;
cout << "1.facil\n2.medio\n3.dificil\n4.jedi\n\n";
cin >> dificulty;
system("clear");
  switch(dificulty){
    case 1:{
         int ind_palavra = Sortfacil();

         copiadicafacil(ind_palavra);
      
         copiafacil(ind_palavra);
         limpapalavra();
      while(cont_erros<6){
        mostraforca(cont_erros);
        MostraPalavra();
        cout << "\n\n\n";
        if (cont_erros > 2) MostraDica();
        MostraLetra(letras_digitadas,cont_let_dig);
        cout<<"\n\n Tentativas restantes: "<<6-cont_erros<<"\n\n";
        cout<<"\n\n";
        cout<<"Digite uma letra: ";
        cin>>letra;
        system("clear");
        letra = tolower(letra);
        if(verificaletra(letra,letras_digitadas)){
            cout<<"Letra ja foi digitada! Tente novamente!\n\n";  
          system("clear");
        }else{
            letras_digitadas[cont_let_dig] = letra;
            cont_let_dig++;
     if(verificaletra(letra,palavra_sort)){
                substitui(letra);
            }else{
                cout<<"\nLetra incorreta! Tente novamente\n\n";
                cont_erros++;
                system("clear");
            }
        }
        if(cont_erros>=6){
            system("clear");
            cout<<"\n\n\tSuas tentativas acabaram!\n Reinicie para tentar novamente!\n";
            system("clear");
            return 0;
        }
        if(palavracompleta()){
            cout<<"\n\tPARABENS!!!\n Voce acertou a palavra!\n\n";
            
            return 0;
        }
    }
 
    break;
      }
    case 2:{
         int ind_palavra = Sortmedio();
      
         copiadicamedio(ind_palavra);
         copiamedio(ind_palavra);
         limpapalavra();
      while(cont_erros<6){
        mostraforca(cont_erros);
        MostraPalavra();
        
        if (cont_erros > 3) MostraDica();
        MostraLetra(letras_digitadas,cont_let_dig);
        cout<<"\n\n Tentativas restantes: "<<6-cont_erros<<"\n\n";
        cout<<"\n\n";
        cout<<"Digite uma letra: ";
        cin>>letra;
        system("clear");
        letra = tolower(letra);
        if(verificaletra(letra,letras_digitadas)){
            cout<<"Letra ja foi digitada! Tente novamente!\n\n";  
          system("clear");
        }else{
            letras_digitadas[cont_let_dig] = letra;
            cont_let_dig++;
     if(verificaletra(letra,palavra_sort)){
                substitui(letra);
            }else{
                cout<<"\nLetra incorreta! Tente novamente\n\n";
                cont_erros++;
                system("clear");
            }
        }
        if(cont_erros>=6){
            system("clear");
            cout<<"\n\n\tSuas tentativas acabaram!\n Reinicie para tentar novamente!\n";
            cout << "";
            system("clear");
            return 0;
        }
        if(palavracompleta()){
            cout<<"\n\tPARABENS!!!\n Voce acertou a palavra!\n\n";
            
            return 0;
        }
    }
 
    break;
      }
    case 3:{
         int ind_palavra = Sortdificil();
         copiadicadificil(ind_palavra);
         copiadificil(ind_palavra);
         limpapalavra();
      while(cont_erros<6){
        mostraforca(cont_erros);
        MostraPalavra();
        if (cont_erros > 4) MostraDica();
        MostraLetra(letras_digitadas,cont_let_dig);
        cout<<"\n\n Tentativas restantes: "<<6-cont_erros<<"\n\n";
        cout<<"\n\n";
        cout<<"Digite uma letra: ";
        cin>>letra;
        system("clear");
        letra = tolower(letra);
        if(verificaletra(letra,letras_digitadas)){
            cout<<"Letra ja foi digitada! Tente novamente!\n\n";  
          system("clear");
        }else{
            letras_digitadas[cont_let_dig] = letra;
            cont_let_dig++;
     if(verificaletra(letra,palavra_sort)){
                substitui(letra);
            }else{
                cout<<"\nLetra incorreta! Tente novamente\n\n";
                cont_erros++;
                system("clear");
            }
        }
        if(cont_erros>=6){
            system("clear");
            cout<<"\n\n\tSuas tentativas acabaram!\n Reinicie para tentar novamente!\n";
            system("clear");
            return 0;
        }
        if(palavracompleta()){
            cout<<"\n\tPARABENS!!!\n Voce acertou a palavra!\n\n";
            
            return 0;
        }
    }
 
      break;
    }
    case 4:{
        int ind_palavra = Sortjedi();
         copiadicajedi(ind_palavra);
         copiajedi(ind_palavra);
         limpapalavra();
      while(cont_erros<6){
        mostraforca(cont_erros);
        MostraPalavra();
        MostraLetra(letras_digitadas,cont_let_dig);
        cout<<"\n\n Tentativas restantes: "<<6-cont_erros<<"\n\n";
        
        cout<<"\n\n";
        cout<<"Digite uma letra: ";
        cin>>letra;
        system("clear");
        letra = tolower(letra);
        if(verificaletra(letra,letras_digitadas)){
            cout<<"Letra ja foi digitada! Tente novamente!\n\n";  
          system("clear");
        }else{
            letras_digitadas[cont_let_dig] = letra;
            cont_let_dig++;
     if(verificaletra(letra,palavra_sort)){
                substitui(letra);
            }else{
                cout<<"\nLetra incorreta! Tente novamente\n\n";
                cont_erros++;
                system("clear");
            }
        }
        if(cont_erros>=6){
            cout<<"\n\n\tSuas tentativas acabaram!\n Reinicie para tentar novamente!\n";
            return 0;
        }
        if(palavracompleta()){
            cout<<"\n\tPARABENS!!!\n Voce acertou a palavra!\n\n";
            
            return 0;
        }
    }
 
      break;
    }
  }
    
};