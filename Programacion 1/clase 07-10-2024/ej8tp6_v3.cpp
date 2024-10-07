///Ejercicio
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Declaración o prototipo de la función
bool esBisiesto(int anio, string &paraEscribir);
int main(){
    int anioIngresado, &refe=anioIngresado;
    refe=123;
    cout<<anioIngresado<<endl;
    string palabra="VACIO";
    cout<<"INGRESE UN VALOR PARA EL ANIO ";
    cin>>anioIngresado;
    esBisiesto(anioIngresado, palabra);
    cout<<palabra;
    cout<<endl;

	system("pause");
	return 0;
}

///PASO DE PARAMETRO POR VALOR: UNA FUNCIÓN ENVIA VALORES A OTRA
bool esBisiesto(int anio, string &paraEscribir){
    if(anio%4!=0){
            paraEscribir="NO BISIESTO";
            return false;
    }
    if(anio%100==0 && anio%400!=0){
        paraEscribir="NO BISIESTO";
        return false;
    }
    paraEscribir="BISIESTO";
    return true;
}
