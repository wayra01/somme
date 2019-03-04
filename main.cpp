#include <iostream>
#include <unistd.h>
using namespace std;

int NUM;
int somma=0;
int cont=0;
int sommapari=0;
double mediapari=0;
int main(){
    for(int i=0; i<10; i++){
        cout<<"inserisci un numero: ";
        cin>>NUM;
        if(NUM>=0){
            somma=somma+NUM;
        }
        if(NUM%2==0){
            cont++;
            sommapari=sommapari+NUM;
        }
    }
    cout<<"la somma dei numeri positivi e' "<<somma<<endl;
    cout<<"la somma dei numeri pari e'"<<sommapari<<endl;
    mediapari=sommapari/cont;
    cout<<"la media dei numeri pari e' "<<mediapari<<endl;
    cout<<"il numero delle cifre pari immese e' "<<cont<<endl;
    return 0;
}
