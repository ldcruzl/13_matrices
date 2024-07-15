//CRUZ LLICA, Luis David

#include<iostream>
using namespace std;

int main(){
    int s=0, n;
    cout<<"Ingrese el orden de la matriz: ";cin>>n;
    int matriz[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"Ingrese el valor para ["<<i+1<<"]"<<" ["<<j+1<<"]: ";cin>>matriz[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<j){
                s=s+matriz[i][j];
            }
        }
    }
    system("cls");
    cout<<"------Sumatoria triangular superior------"<<endl;
    cout<<"La sumatoria es de: "<<s<<endl;
    system("pause");
    return 0;
}