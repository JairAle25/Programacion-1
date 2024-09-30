///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///para promedio necesito sumar todos los valores y dividirlo por la cantidad de valores

int main(){
    int cEstacion;
    float nafta, gasoil;
    ///a
    int contEstaciones=0;
    ///b
    float naftaMax=0;
    int estacionMaxima;
    ///c
    float sumaLitros=0;

    cout<<"ESTACION ";
    cin>>cEstacion;
    while(cEstacion!=0){
        contEstaciones++;
        cout<<"CANTIDAD DE NAFTA ";
        cin>>nafta;
        cout<<"CANTIDAD DE GASOIL ";
        cin>>gasoil;
        /// punto b
        if(nafta>naftaMax){
            naftaMax=nafta;
            estacionMaxima=cEstacion;
        }
        ///punto c
        sumaLitros+=gasoil;

        cout<<"ESTACION ";
        cin>>cEstacion;
    }
	cout<<"CANTIDAD DE ESTACIONES "<<contEstaciones<<endl;
	cout<<"ESTACION QUE VENDIO MAS NAFTA "<<estacionMaxima<<endl;
	float promedio=sumaLitros/contEstaciones;
	cout<<"PROMEDIO DE GASOIL POR ESTACION "<<promedio;
	cout<<endl;
	system("pause");
	return 0;
}
