//CRUZ LLICA, Luis David

#include<iostream>
using namespace std;

int main(){
    int n, s=0;
    int matriz[n][n];
    cout<<"Ingres el orden de la matriz: ";cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"Ingrese el valor para ["<<i+1<<"]"<<" ["<<j+1<<"]: ";cin>>matriz[i][j];
        }
    }
    return 0;
}