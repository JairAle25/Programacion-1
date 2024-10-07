///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

void seleccionarNaipe(int codigo, int &numeroNaipe, string &nombrePalo){
    int resto=codigo%10;
    if(resto==0){
        numeroNaipe=12;
    }
    else{
        if(resto<8){
            numeroNaipe=resto;
        }
        else{
            numeroNaipe=resto+2;
        }
    }
    int palo;
    if(resto==0){
        palo=(codigo/10)-1;
    }
    else{
        palo=codigo/10;
    }
    switch(palo){
        case 0: nombrePalo="ESPADA";
                break;
        case 1: nombrePalo="BASTO";
                break;
        case 2: nombrePalo="COPA";
                break;
        case 3:nombrePalo="ORO";
                break;

    }

}

int main(){
    int codigo, numero;
    string palo;
    cout<<"INGRESE CODIGO ";
    cin>>codigo;
    while(codigo!=0){
        seleccionarNaipe(codigo,numero, palo);
        cout<<numero<<endl<<palo<<endl<<endl;
        cout<<"INGRESE CODIGO ";
        cin>>codigo;
    }
	cout<<endl;
	system("pause");
	return 0;
}
