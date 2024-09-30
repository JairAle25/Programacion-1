///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    int opc=1, num, i, sumaDivisores;

    opc;

	while(true){
        system("cls");
        cout<<"MENU CALCULO DE NUMERO PERFECTO"<<endl;
        cout<<"1. USANDO UN FOR"<<endl;
        cout<<"2. USANDO UN WHILE"<<endl;
        cout<<"0. FIN DEL PROGRAMA"<<endl;
        cout<<"********************************"<<endl;
        cout<<"INGRESAR OPCION ";
        cin>>opc;
        ///
        system("cls");


        sumaDivisores=0;
        i=1;
        ///
        switch(opc){
        case 1: cout<<"INGRESAR NUMERO ";
                cin>>num;
                ///num=INT_MAX;
                for(i=1;i<num;i++){
                    if(num%i==0){
                    sumaDivisores+=i;
                    }
                }
                if(num==sumaDivisores){
                cout<<num<<" ES UN NUMERO PERFECTO";
                }
                else{
                    cout<<num<<" NO ES UN NUMERO PERFECTO";
                }
                cout<<endl;
                break;
        case 2: cout<<"INGRESAR NUMERO ";
                cin>>num;
                //num=INT_MAX;
                while(i<=(num/2)){
                    if(num%i==0){
                    sumaDivisores+=i;
                    }
                    i++;
                }
                if(num==sumaDivisores){
                cout<<num<<" ES UN NUMERO PERFECTO";
                }
                else{
                    cout<<num<<" NO ES UN NUMERO PERFECTO";
                }
                cout<<endl;
                break;

        default: cout<<"EL VALOR INGRESADO NO ES CORRECTO"<<endl;
                break;

        case 0: cout<<"GRACIAS POR USAR NUESTRO SOFTWARE"<<endl;
                return 0;
        }

        system("pause");

	}

	cout<<endl;
	system("pause");
	return 0;
}
