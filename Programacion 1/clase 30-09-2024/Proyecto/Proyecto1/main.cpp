#include <iostream>

using namespace std;

#include "funciones.h"


int main(){
    int num;
    cout<<"INGRESAR NUMERO ";
    cin>>num;

    bool esPerfecto=calcularPerfecto(num);

	if(esPerfecto==true){
        cartelQueSi();///llamada a la función
	}
	else{
        cartelQueNo();
	}
	cout<<endl;
	system("pause");
	return 0;
}

