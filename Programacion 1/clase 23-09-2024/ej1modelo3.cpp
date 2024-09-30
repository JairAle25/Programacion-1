///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;



int main(){
    const int DIAS=5;
    int dia,i;
    float inmobiliario, automotor;
    ///b
    float menosRecaudacion;
    int diaMenos;
    ///c
    int cont=0;

    for(i=1;i<=DIAS;i++){
        cout<<"DIA "<<i<<endl;
        cout<<"RECAUDACION INMOBILIARIO ";
        cin>>inmobiliario;
        cout<<"RECAUDACION AUTOMOTOR ";
        cin>>automotor;

        float porcentaje=automotor/(automotor+inmobiliario)*100;
        cout<<"PORCENTAJE DEL IMPUESTO AUTOMOTOR "<<porcentaje<<endl;
        ///punto b
        if(i==1){
            menosRecaudacion=inmobiliario;
            diaMenos=1;
        }
        else{
            if(inmobiliario<menosRecaudacion){
                menosRecaudacion=inmobiliario;
                diaMenos=i;
            }
        }
        if(automotor>inmobiliario) cont++;

    }
    cout<<"DIA DE MENOR RECAUDACION INMOBILIARIO "<<diaMenos<<endl;
    cout<<"CANTIDAD DE DIAS CON MAS RECAUDACION AUTOMOTOR "<<cont;
	cout<<endl;
	system("pause");
	return 0;
}
