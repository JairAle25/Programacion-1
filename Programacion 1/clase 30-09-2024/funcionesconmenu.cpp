///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Hacer un programa para que el usuario ingrese 2 números, y luego elija que operación hacer
/// una opción de acuerdo con lo siguiente:
/// si el usuario ingresa una S, se calcule la suma de ambos números.
/// si el usuario ingresa una R, se calcule la resta del primero menos el segundo.
/// si el usuario ingresa una P, se calcule el producto de ambos números.
/// si el usuario ingresa una F, se termine el programa.

int sumarDosNumeros(int n1,int n2){
    int suma;
    suma=n1+n2;
    return suma;
}

int restar2Numeros(int n1, int n2){


}

int multiplicar2Numeros(int n1, int n2){


}

int main(){
    int num1, num2, resultado;
    char opcion;
    bool seImprime, estaCargado=false;
    while(true){
        seImprime=true;
        system("cls");
        cout<<"************MENU PRINCIPAL************"<<endl;
        cout<<"I. INGRESO DE NUMEROS PARA EL CALCULO"<<endl;
        cout<<"S. CALCULO DE LA SUMA"<<endl;
        cout<<"R. CALCULO DE LA RESTA"<<endl;
        cout<<"P. CALCULO DEL PRODUCTO"<<endl;
        cout<<"F. FIN DEL PROGRAMA"<<endl;
        cout<<"***************************************"<<endl;
        cout<<"INGRESAR OPCION ";
        cin>>opcion;
        system("cls");
        switch(opcion){

            case 'I':   cout<<"INGRESAR NUMERO ";
                        cin>>num1;
                        cout<<"INGRESAR NUMERO ";
                        cin>>num2;
                        seImprime=false;
                        estaCargado=true;
                        break;
            case 'S':   if(estaCargado==false){
                            cout<<"NO SE INGRESARON VALORES";
                            seImprime=false;
                        }
                        else{
                            resultado=sumarDosNumeros(num1,num2);
                        }
                        break;
            case 'R':   resultado=num1-num2;
                        break;
            case 'P':   resultado=num1*num2;
                        break;
            case 'F':   return 0;
                        break;
            default:   cout<<"VALOR INGRESADO INCORRECTO"<<endl;
                       seImprime=false;
                       break;
        }
        if(seImprime==true) cout<<"RESULTADO DE LA OPERACION "<<resultado<<endl;
        cout<<endl;
        system("pause");
    }
	cout<<endl;
	system("pause");
	return 0;
}


