#include <iostream>

using namespace std;

int main(){
    float impInmobiliario,impAutomotor,porcAutomotor,minImpInmob;
    int diaMin,cantDiasAuto=0;
    bool haymenor=false;
    for(int i=1;i<=31;i++){
        cout<<"INGRESE EL IMPORTE DEL PAGO DEL IMPUESTO INMOBILIARIO : ";
        cin>>impInmobiliario;
        cout<<"INGRESE EL IMPORTE DEL PAGO DEL IMPUESTO AUTOMOTOR : ";
        cin>>impAutomotor;

        ///PUNTO A
        porcAutomotor=impAutomotor*100/(impAutomotor+impInmobiliario);
        cout<<"EL PORCENTAJE DE IMPUESTO AUTOMOTOR DEL DIA "<<i<<" ES DEL "<<porcAutomotor<<"%"<<endl<<endl;

        ///PUNTO B
        if(haymenor==false){
            minImpInmob=impInmobiliario;
            diaMin=i;
            haymenor=true;
        }
        else if(impInmobiliario<minImpInmob){
            minImpInmob=impInmobiliario;
            diaMin=i;
        }

        ///PUNTO C
        if(impAutomotor>impInmobiliario){
            cantDiasAuto++;
        }
    }

    cout<<"EL DIA "<<diaMin<<" SE RECAUDO MENOS IMPUESTO INMOBILIARIO"<<endl;
    cout<<"LA CANTIDAD DE DIAS DONDE HUBO MAS RECAUDACION DE AUTOMOTOR QUE DE INMOBILIARIO FUE : "<<cantDiasAuto<<endl;
    return 0;
}
