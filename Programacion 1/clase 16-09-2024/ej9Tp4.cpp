///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    int num,maximoPar;
    bool hayPares=false;
    cout<<"INGRESE UN NUMERO ";
    cin>>num;
    while(num!=0){
        if(num%2==0){
            ///acá vienen los pares
            if(hayPares==false){
                hayPares=true;
                maximoPar=num;
            }
            else{
                if(num>maximoPar){
                    maximoPar=num;
                }
            }
        }
        cout<<"INGRESE UN NUMERO ";
        cin>>num;
    }

    if(hayPares==true){
        cout<<"MAXIMO PAR INGRESADO "<<maximoPar;
    }
    else{
        cout<<"NO HUBO NUMEROS PARES";
    }
	cout<<endl;
	system("pause");
	return 0;
}
