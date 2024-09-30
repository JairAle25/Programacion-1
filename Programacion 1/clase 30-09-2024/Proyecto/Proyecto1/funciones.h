#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

///prototipos
bool calcularPerfecto(int num);

void cartelQueSi();
void cartelQueNo();


///desarrollo de las funciones
bool calcularPerfecto(int num){
	int i,sumaDivisores=0;
	for(i=1;i<num;i++){
		if(num%i==0){
			sumaDivisores+=i;
		}
	}
	if(num==sumaDivisores) return true;

	return false;
}

void cartelQueSi(){
	cout<<"EL VALOR INGRESADO ES UN NUMERO PERFECTO";
}

void cartelQueNo(){
	cout<<"EL VALOR INGRESADO NO ES UN NUMERO PERFECTO";
}

#endif // FUNCIONES_H_INCLUDED
