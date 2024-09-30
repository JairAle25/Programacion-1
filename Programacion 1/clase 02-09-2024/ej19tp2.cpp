///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    int horas,tipoProyecto, i;///1: urgente; 0->normal
    float valorProyecto,valorHora;
    char lenguaje;
    bool esLenguajeCorrecto=true;
    cout<<"INGRESAR EL LENGUAJE A UTILIZAR "<<endl;
    cout<<"C/C++: c; C#: #; Python: p; Go: g"<<endl;
    cin>>lenguaje;
    switch(lenguaje){
        case 'c':   valorHora=7.5;
                    break;
        case '#':   valorHora=6.1;
                    break;
        case 'p':   valorHora=5.4;
                    break;
        case 'g':   valorHora=5;
                    break;
        default:    cout<<"ERROR EN LA SELECCION DEL LENGUAJE"<<endl;
                    esLenguajeCorrecto=false;
                    break;
    }
    if(esLenguajeCorrecto==true){
        cout<<"ES URGENTE EL PROYECTO? (1: SI; 0: NO) ";
        cin>>tipoProyecto;
        cout<<"INGRESAR CANTIDAD DE HORAS ";
        cin>>horas;

        if(tipoProyecto==1){///es urgente
            valorProyecto=valorHora*horas*2.2;
        }
        else{
            valorProyecto=valorHora*horas;
        }
        cout<<"COSTO TOTAL DEL PROYECTO "<<valorProyecto;
        cout<<endl;
        system("pause");
        system("cls");
    }
	return 0;
}
