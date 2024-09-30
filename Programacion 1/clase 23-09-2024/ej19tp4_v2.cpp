///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;



int main(){
    int num, sumaDivisores=0, i=1;
    for(num=1;num<=100000;num++){
        sumaDivisores=0;
        i=1;
        while(i<=(num/2)){
            if(num%i==0){
                sumaDivisores+=i;
            }
            i++;
        }
        if(num==sumaDivisores){
            cout<<num<<" ES UN NUMERO PERFECTO"<<endl;
        }

    }
	cout<<endl;
	system("pause");
	return 0;
}
