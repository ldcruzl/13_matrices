//CRUZ LLICA, Luis David

#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Ingrese el numero de partidos politicos: ";cin>>n;
    cout<<"Ingrese el numero de ciudades: ";cin>>m;
    string par[n];
    string ciu[m];
    int votos[n][m];
    for(int i=0; i<n; i++){
        cin.ignore();
        cout<<"Ingrese el nombre del partido #"<<i+1<<" :";getline(cin,par[i]);
    }
    for(int i=0; i<m; i++){
        cin.ignore();
        cout<<"Ingrese el nombre de la ciudad #"<<i+1<<": ";getline(cin,ciu[i]);
    }
    return 0;
}