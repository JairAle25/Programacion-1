///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;



int main(){
    int num, sumaDivisores=0, i=1;
    cout<<"INGRESAR NUMERO ";
    cin>>num;
    for(i=1;i<num;i++){
        if(num%i==0){
            sumaDivisores+=i;
        }
    }

    /*while(i<num){
        if(num%i==0){
            sumaDivisores+=i;
        }
        i++;
    }
    */
    /*while(i<=(num/2)){
        if(num%i==0){
            sumaDivisores+=i;
        }
        i++;
    }   */
	if(num==sumaDivisores){
        cout<<num<<" ES UN NUMERO PERFECTO";
	}
	else{
        cout<<num<<" NO ES UN NUMERO PERFECTO";
	}
	cout<<endl;
	system("pause");
	return 0;
}
