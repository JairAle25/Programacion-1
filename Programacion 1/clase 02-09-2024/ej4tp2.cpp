///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    int n1, n2, mayor, menor, diferencia;
    cout<<"INGRESAR NUMERO ";
    cin>>n1;
    cout<<"INGRESAR NUMERO ";
    cin>>n2;
    if(n1>n2){
        mayor=n1;
        menor=n2;
    }
    else{
        mayor=n2;
        menor=n1;
    }
    diferencia=mayor-menor;
    cout<<"DIFERENCIA "<<diferencia;
	cout<<endl;
	system("pause");
	return 0;
}
