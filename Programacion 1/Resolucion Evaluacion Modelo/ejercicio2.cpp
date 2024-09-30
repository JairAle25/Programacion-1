#include <iostream>

using namespace std;

int main(){
    int codEstacion;
    int cantEstaciones=0,maxEstacion;
    float promedio,cantNaftaVend,cantGasVend,maxNafta=-1,cantGasoil=0;
    cout<<"INGRESE CODIGO DE ESTACION : ";
    cin>>codEstacion;
    while(codEstacion!=0){
        cout<<"INGRESE CANTIDAD DE NAFTA VENDIDA : ";
        cin>>cantNaftaVend;
        cout<<"INGRESE CANTIDAD DE GASOIL VENDIDA : ";
        cin>>cantGasVend;

        ///PUNTO A
        cantEstaciones++;

        ///PUNTO B
        if(cantNaftaVend>maxNafta){
            maxNafta=cantNaftaVend;
            maxEstacion=codEstacion;
        }
        ///PUNTO C
        cantGasoil+=cantGasVend;

        cout<<"INGRESE CODIGO DE ESTACION : ";
        cin>>codEstacion;
    }
    promedio = (float)cantGasoil/cantEstaciones;

    cout<<"HAY EN TOTAL "<<cantEstaciones<<" ESTACIONES"<<endl;
    cout<<"EL CODIGO DE ESTACION QUE MAS NAFTA VENDIO FUE : "<<maxEstacion<<endl;
    cout<<"EL PROMEDIO DE GASOIL VENDIDA ENTRE TODAS LAS ESTACIONES ES : "<<promedio<<endl;

    return 0;
}
