///Ejercicio
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Declaracoión o prototipo de la función
int esBisiesto(int anio);

int main(){
    int anioIngresado;
    for(int i=1;i<=3;i++){
        cout<<"INGRESE UN VALOR PARA EL ANIO ";
        cin>>anioIngresado;
        int retorno=esBisiesto(anioIngresado);
        if(retorno==1){
            cout<<"EL ANIO ES BISIESTO "<<endl;
        }
        else{
            cout<<"EL ANIO NO ES BISIESTO "<<endl;
        }
        cout<<endl;
    }
	system("pause");
	return 0;
}


int esBisiesto(int anio){
    if(anio%4!=0) return 0;
    if(anio%100==0 && anio%400!=0)return 0;
    return 1;
}
