///Ejercicio
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Declaracoión o prototipo de la función
bool esBisiesto(int anio);

int main(){
    int anioIngresado;

    cout<<"INGRESE UN VALOR PARA EL ANIO ";
    cin>>anioIngresado;
    int retorno=esBisiesto(anioIngresado);
    ///if(retorno==true){
    if(retorno){
        cout<<"EL ANIO ES BISIESTO "<<endl;
    }
    else{
        cout<<"EL ANIO NO ES BISIESTO "<<endl;
    }
    cout<<endl;

	system("pause");
	return 0;
}


bool esBisiesto(int anio){
    if(anio%4!=0) return false;
    if(anio%100==0 && anio%400!=0)return false;
    return true;
}
