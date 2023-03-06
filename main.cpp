#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout<< "X-----------------------------------X\n";
    cout<< "| Bem-vindos ao jogo da Adivinhação |\n";
    cout<< "X-----------------------------------X\n";

    int dificuldade;
    const int NUMERO_SECRETO = 42;
    
    while(true){
        int choice;
        cout<<"Escolha a dificuldade: \n";
        cout<<"1 - Fácil\n";
        cout<<"2 - Médio\n";
        cout<<"3 - Difícil\n";

        cout<<"\nInput: ";
        cin >> choice;
        if(choice == 1){
            dificuldade = 10;
            break;
        }else if(choice == 2){
            dificuldade = 7;
            break;
        }else if(choice == 3){
            dificuldade = 5;
            break;
        }else{
            cout<<"| Valor Inválido |";
        }
    }
    
    for(int i = 0; i < dificuldade; i++){
        int numeroChute;
        cout<< "\nDigite um valor: ";
        cin >> numeroChute;
        
        if(numeroChute > NUMERO_SECRETO){
            cout<<"| O número secreto é menor |\n";
        }else if(numeroChute < NUMERO_SECRETO){
            cout<<"| O número secreto é maior |\n";
        }else{
            cout<<"| Você acertou! :D |\n";
            break;
        }
    }

    cout<<"\nObrigado por jogar!";
}
