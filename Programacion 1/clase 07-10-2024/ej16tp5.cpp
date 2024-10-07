///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>

///Entrada: nArticulo, cantidad, importe
///Finaliza con nArticulo ==0
///Salidas:
///Recaudación total para cada artículo (son 3)
///Artículo con mayor cantidad de unidades vendidas
///
using namespace std;


int main(){
    int nArticulo, cantidad;
    float importe, rec1, rec2, rec3;
    rec1=rec2=rec3=0;
    int total1, total2, total3;
    total1=total2=total3=0;
    cout<<"ARTICULO ";
    cin>>nArticulo;
    while(nArticulo!=0){
        cout<<"CANTIDAD ";
        cin>>cantidad;
        cout<<"IMPORTE ";
        cin>>importe;
        ///
        switch(nArticulo){
            case 1: rec1+=importe;
                    total1+=cantidad;
                    break;
            case 2: rec2+=importe;
                    total2+=cantidad;
                    break;
            case 3:rec3+=importe;
                    total3+=cantidad;
                    break;
        }

        cout<<"ARTICULO ";
        cin>>nArticulo;
    }
	cout<<"RECAUDACION ARTICULO 1 "<<rec1<<endl;
	cout<<"RECAUDACION ARTICULO 2 "<<rec2<<endl;
	cout<<"RECAUDACION ARTICULO 3 "<<rec3<<endl;
	cout<<endl;
	if(total1>total2 && total1>total3){
        cout<<"EL ARTICULO 1 VENDIO MAS CANTIDAD DE UNIDADES"<<endl;
	}
	else{
        if(total2>total3)cout<<"EL ARTICULO 2 VENDIO MAS CANTIDAD DE UNIDADES"<<endl;
        else cout<<"EL ARTICULO 3 VENDIO MAS CANTIDAD DE UNIDADES"<<endl;
	}
	system("pause");
	return 0;
}
