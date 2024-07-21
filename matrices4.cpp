//CRUZ LLICA, Luis David

#include<iostream>
using namespace std;

int main(){
    int n = 7, m = 4;
    int ventas[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << "Ingrese la venta del dia: ";
            cin >> ventas[i][j];
        }
    }
    int s = 0;
    cout<<"Venta de cuatro semanas"<<endl;
    cout<<"---------------------------------"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            s += ventas[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << ventas[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "Venta total del mes: " << s << endl;
    return 0;
}