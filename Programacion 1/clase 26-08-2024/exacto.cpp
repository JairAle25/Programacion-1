///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    const int VUELTAS=10;
    int n1, maximo, i;

    for(i=1;i<=VUELTAS;i++){
        cout<<"INGRESE UN NUMERO ";
        cin>>n1;
        if(i==1){
            maximo=n1;
        }
        else{
                if(n1>maximo){
                    maximo=n1;
                }
        }
    }


    cout<<"EL NUMERO MAS GRANDE ES ";
    cout<<maximo<<endl;
	cout<<endl;
	system("pause");
	return 0;
	///for(variable=valor_inicial;variable comparado con algo; incremento variable){

	}


