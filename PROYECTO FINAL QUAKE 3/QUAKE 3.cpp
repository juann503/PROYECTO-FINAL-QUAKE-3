#include<iostream>
using namespace std;
int main(){
    int n,i,edad,kill[100],armas[100],deaths[100];
    float minutos[100];
    string alias;
    cout<<"indique la cantidad de jugadores: "<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"indique el alias del jugador"<<i+1<<endl;
        cin>>alias;
        cout<<"indique la cantidad de minutos jugados por el jugador"<<i+1<<endl;
        cin>>minutos[i];
        cout<<"indique la edad del jugador"<<i+1<<endl;
        cin>>edad;
        cout<<"indique la cantidad de asesinatos del jugador"<<i+1<<endl;
        cin>>kill[i];
        cout<<"indique la cantidad de armas utilzadas por el jugador"<<i+1<<endl;
        cin>>armas[i];
        cout<<"indique la cantidad de bajas del jugador"<<i+1<<endl;
        cin>>deaths[i];


    }
    
}