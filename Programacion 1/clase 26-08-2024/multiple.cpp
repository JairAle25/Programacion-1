///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Hacer un programa para ingresar dos números, y que calcule:
/// - si se ingresa una 'S' la suma de los 2 números
/// - si se ingresa una 'R' la resta del primero menos el segundo
/// - si se ingresa una 'P' el producto de ambos números

int main(){
    int num1, num2, resultado;
    char opc;
    bool mostrarResultado=true;
    cout<<"INGRESE UN NUMERO ";
    cin>>num1;
    cout<<"INGRESE UN NUMERO ";
    cin>>num2;
    cout<<"INGRESE EL TIPO DE OPERACION (S: suma; R: resta; P:producto) ";
    cin>>opc;
    switch(opc){
        case 'S':   resultado=num1+num2;
                    break;
        case 'R':   resultado=num1-num2;
                    break;
        case 'P':   resultado=num1*num2;
                    break;
        default:    cout<<endl<<"OPCION INCORRECTA"<<endl;
                    mostrarResultado=false;
                    break;

    }
    if(mostrarResultado==true){
        cout<<"EL RESULTADO ES "<<resultado<<endl;
    }
	return 0;


	}


