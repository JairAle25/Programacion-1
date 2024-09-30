///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    const int VUELTAS=5;
    int n1, maximo,minimo, i;
    ///para el cálculo del promedio
    float promedio;
    int suma=0;
    ///para la cantidad de positivos
    int cantPos=0;
      ///para la cantidad de pares
    int cantPares=0;

    for(i=1;i<=VUELTAS;i++){
        cout<<"INGRESE UN NUMERO ";
        cin>>n1;
        if(i==1 || n1>maximo){
            maximo=n1;
        }
        if(i==1 || n1<minimo){
            minimo=n1;
        }
        suma+=n1;
        ///cantPos+=(n1>0);
        if(n1>0){
            cantPos++; ///cantPos+=1    cantPos=cantPos+1   ++cantPos
        }
        if(n1%2==0){
            cantPares++;
        }
    }


    cout<<"EL NUMERO MAS GRANDE ES ";
    cout<<maximo<<endl;
	cout<<endl;
	cout<<"EL NUMERO MAS CHICO ES ";
    cout<<minimo<<endl;
	promedio=(float)suma/VUELTAS;
	cout<<"PROMEDIO "<<promedio;
	cout<<endl;
	cout<<"CANTIDAD DE POSITIVOS "<< cantPos;
	cout<<endl;
    cout<<"CANTIDAD DE PARES "<< cantPares;
	cout<<endl;
	system("pause");
	return 0;
	///for(variable=valor_inicial;variable comparado con algo; incremento variable){

	}


