///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    const int CANT=5;
    int i, num, minPos, maxNeg;
    bool hayPositivos=false, hayNegativos=false;
    for(i=1;i<=CANT;i++){
        cout<<"INGRESAR NUMERO ";
        cin>>num;
        if(num>0){
            if(hayPositivos==false){
               hayPositivos=true;
               minPos=num;
            }
            else{
                if(num<minPos){
                    minPos=num;
                }
            }
        }
        else{
            if(num<0){
                if(hayNegativos==false){
                    hayNegativos=true;
                    maxNeg=num;
                }
                else{
                    if(num>maxNeg){
                        maxNeg=num;
                    }
                }
            }
        }
    }
    if(hayPositivos){
        cout<<"EL MINIMO DE LOS POSITIVOS ES "<<minPos<<endl;
    }
    if(hayNegativos){
        cout<<"EL MAXIMO DE LOS NEGATIVOS ES "<<maxNeg;
    }
	cout<<endl;
	system("pause");
	return 0;
}
