///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    const int CANT=5;
    int legajo, edad, i;
    int maxLegajo, maxEdad=-1;
    for(i=1;i<=CANT;i++){
        cout<<"INGRESAR EL LEGAJO ";
        cin>>legajo;
        cout<<"INGRESAR EDAD ";
        cin>>edad;
        if(edad>maxEdad){
            maxEdad=edad;
            maxLegajo=legajo;
        }
    }
	cout<<"EL LEGAJO DEL ALUMNO CON MAYOR EDAD ES "<<maxLegajo;
	cout<<endl;
	system("pause");
	return 0;
}
