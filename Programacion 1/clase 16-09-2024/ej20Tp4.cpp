///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    int num, pos=0;
    ///punto a
    int primerPar, posPrimerPar;
    bool hayPares=false;
    ///punto b
    int resto, ultimoPrimo=4, divisores, i, posPrimo;
    cout<<"INGRESE UN NUMERO ";
    cin>>num;
    while(num!=0){
        ///pos cuente la cantidad de ingresos
        pos++;
        ///calcular primer valor par
        if(num%2==0){
            if(hayPares==false){
                primerPar=num;
                hayPares=true;
                posPrimerPar=pos;
            }
        }
        ///CÁLCULO DEL ÚLTIMO PRIMO
        divisores=0;
        for(i=1;i<=num;i++){
            resto=num%i;
            if(resto==0){
                divisores++;
            }
        }
        if(divisores==2){
            ultimoPrimo=num;
            posPrimo=pos;
        }
        ///
        cout<<"INGRESE UN NUMERO ";
        cin>>num;
    }
    if(hayPares==true){
        cout<<"PRIMER PAR INGRESADO "<<primerPar;
        cout<<" OCUPAR LA POSICION "<<posPrimerPar;
    }
    else{
        cout<<"NO HUBO NUMEROS PARES";
    }
	cout<<endl<<endl;
	if(ultimoPrimo!=4){
        cout<<"ULTIMO PRIMO "<<ultimoPrimo<<" OCUPA LA POSICION "<<posPrimo<<endl;
	}
	else{
        cout<<"NO HUBO PRIMOS"<<endl;
	}
	system("pause");
	return 0;
}
