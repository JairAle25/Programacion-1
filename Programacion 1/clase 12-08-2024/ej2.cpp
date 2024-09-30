///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    int n1, n2, mayor;
    cout<<"INGRESE UN NUMERO ";
    cin>>n1;
    cout<<"INGRESE UN NUMERO ";
    cin>>n2;
    if(n1>n2){
        mayor=n1;
    }
    else{
        mayor=n2;
    }
    cout<<"MAYOR "<<mayor;
	cout<<endl;
	system("pause");
	return 0;
}
