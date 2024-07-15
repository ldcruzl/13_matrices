//CRUZ LLICA, Luis David

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Ingrese el tamanio de la matriz: ";cin>>n;
    int matriz[n][3*n];
    for(int i=0; i<n; i++){
        for(int j=0; j<3*n; j++){
            if(i==0||i==n-1||j==0||j==(3*n)-1){
                matriz[i][j]=1;
            }
            else{
                matriz[i][j]=0;
            }
        }
    }
    cout<<"-----Matriz resultante-----"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<3*n; j++){
            cout<<matriz[i][j];
        }
        cout<<endl;
    }
    return 0;
}