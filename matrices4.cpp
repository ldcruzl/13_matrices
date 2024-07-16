//CRUZ LLICA, Luis David

#include<iostream>
using namespace std;

int main(){
    int n=7, m=4;
    int ventas[n][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<"Ingrese la venta de dia"<<j+1<<" sem"<<i+1<<": ";cin>>ventas[i][j];
        }
    }
    return 0;
}