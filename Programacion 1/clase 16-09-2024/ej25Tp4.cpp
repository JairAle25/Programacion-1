///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    int nArtista, integrantes, jornada, duracion;
    int totalDuracion1=0, totalDuracion2=0, totalDuracion3=0;
    cout<<"INGRESAR ARTISTA ";
    cin>>nArtista;
    while(nArtista!=0){
        cout<<"INTEGRANTES ";
        cin>>integrantes;
        cout<<"JORNADA ";
        cin>>jornada;
        cout<<"DURACION ";
        cin>>duracion;

        switch(jornada){
            case 1: totalDuracion1+=duracion;
                    break;
            case 2: totalDuracion2+=duracion;
                    break;
            case 3: totalDuracion3+=duracion;
                    break;
        }

        cout<<"INGRESAR ARTISTA ";
        cin>>nArtista;
    }
	if(totalDuracion1>totalDuracion2 && totalDuracion1>totalDuracion3){
        cout<<"LA JORNADA 1 TUVO MAYOR DURACION";
	}
	else{
        if(totalDuracion2>totalDuracion3){
                cout<<"LA JORNADA 2 TUVO MAYOR DURACION";
        }
        else{
                cout<<"LA JORNADA 3 TUVO MAYOR DURACION";
        }
	}
	cout<<endl;
	system("pause");
	return 0;
}
