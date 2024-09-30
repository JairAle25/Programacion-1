///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>

/*Dada la edad, el legajo, y el género de los 20 alumnos de un curso, informar:
    - el legajo del alumno de género masculino de mayor edad
    - el legajo del alumno de género femenino de menor edad
    - cuántos alumnos hay de más de 20 años
*/
using namespace std;


int main(){
    const int CANT=5;
    int legajo, edad, i;
    int maxLegajo, maxEdad=-1;
    int minLegajo, minEdad=150;
    char genero;
    int cantMas20=0;
    for(i=1;i<=CANT;i++){
        cout<<"INGRESAR EL LEGAJO ";
        cin>>legajo;
        cout<<"INGRESAR EDAD ";
        cin>>edad;
        cout<<"INGRESAR GENERO ";
        cin>>genero;
        if(edad>20){
            cantMas20++;
        }
        if(genero=='m'){

            if(edad>maxEdad){
                maxEdad=edad;
                maxLegajo=legajo;

            }
        }
        else{

            if(genero=='f'){
                if(edad<minEdad){
                    minEdad=edad;
                    minLegajo=legajo;
                }
            }
        }
    }
	cout<<"EL LEGAJO DEL ALUMNO DE GENERO MASCULINO CON MAYOR EDAD ES "<<maxLegajo;
	cout<<endl;
	cout<<"EL LEGAJO DE LA ALUMNA DE GENERO FEMENINO CON MENOR EDAD ES "<<minLegajo;
	cout<<endl;
	cout<<"CANTIDAD DE ALUMNOS/AS DE MAS DE 20 AÑOS "<<cantMas20<<endl;
	system("pause");
	return 0;
}
