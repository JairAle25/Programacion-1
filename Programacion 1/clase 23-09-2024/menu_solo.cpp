///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    int opc;
	while(true){
        system("cls");
        cout<<"MENU PRINCIPAL"<<endl;
        cout<<"1. OPCION PRIMERA"<<endl;
        cout<<"2. OPCION SEGUNDA"<<endl;
        cout<<"0. FIN DEL PROGRAMA"<<endl;
        cout<<"********************************"<<endl;
        cout<<"INGRESAR OPCION ";
        cin>>opc;
        ///
        system("cls");


        switch(opc){
            case 1: cout<<"SE INGRESO 1 ";
                    break;
            case 2: cout<<"SE INGRESO 2 ";
                    break;
            default: cout<<"EL VALOR INGRESADO NO ES CORRECTO"<<endl;
                    break;

            case 0: cout<<"GRACIAS POR USAR NUESTRO SOFTWARE"<<endl;
                    return 0;
        }
        cout<<endl;
        system("pause");

	}

	cout<<endl;
	system("pause");
	return 0;
}
