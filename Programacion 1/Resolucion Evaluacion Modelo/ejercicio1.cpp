#include <iostream>

using namespace std;

int main(){

    int dia,cantEntradas;
    const float tarifaTotal=15000;
    float importeFinal,tarifa;

    cout<<"INGRESE EL DIA (1 A 7) : ";
    cin>>dia;
    cout<<"INGRESE LA CANTIDAD DE ENTRADAS : ";
    cin>>cantEntradas;

    if(dia==1 || dia==2){
        tarifa= tarifaTotal*0.7;
    }
    else if(dia==3){
        tarifa= tarifaTotal*0.5;
    }
    else{
        tarifa=tarifaTotal;
    }

    importeFinal = tarifa*cantEntradas;

    cout<<"EL TOTAL A PAGAR ES DE : "<<importeFinal<<endl;

    return 0;
}
