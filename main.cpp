#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void saludo(){
		cout << "MI PRIMER PROGRAMA C++" << endl << endl;
}
int suma2Numeros(int num1,int num2){
	return num1+num2;
}
int resta2Numeros(int N1,int N2){
	return N1-N2;
}
int multiplicacion2Numeros(int Num1,int Num2){
	return Num1*Num2;
}
int Division2Numeros(int num1,int num2){
	return num1/num2;
}
int main(int argc, char** argv) {
	saludo();
	comienzo:
	cout << "Que deseas hacer? Ingrese 1:sumar, 2:restar , 3:multiplicar, 4:dividir"<<endl;
	int opcion;
	cin >> opcion;
	int n1,n2,resultado;
	switch(opcion){
		case 1:
		cout << "Elegiste una suma" << endl<< " por favor ingresa el primer numero:" << endl;
		cin >> n1;
		cout << "\nFavor ingresa otro numero:" << endl;		 
		cin >> n2;
		resultado = suma2Numeros(n1,n2);
		cout << endl <<"El resultado es:" << resultado << endl;
		break;
		case 2:
		cout << "Elegiste resta "<<endl<<"por favor ingresa numero 1" << endl;
		cin>>n1;
		cout << "Ingresa el otro numero" << endl;
		cin>>n2;
		resultado=resta2Numeros(n1,n2);
		cout<< endl<<"El resultado de la resta es:" << resultado << endl;
		break;
		case 3:
			cout << "Elegiste multiplicacion" << endl << "favor ingresa el primer numero" << endl;
			cin >> n1;
			cout << "Ingresa el otro numero" << endl;
			cin >> n2;
			resultado = multiplicacion2Numeros(n1,n2);
			cout <<"\nEl resultado de la operacion es:" << resultado<<endl;
		break;
		case 4:
			cout << "Elegiste Division" << endl << "favor ingresa el primer numero" << endl;
			cin >> n1;
			cout << "Ingresa el otro numero" << endl;
			cin >> n2;
			resultado = Division2Numeros(n1,n2);
			cout <<"\nEl resultado de la division es:" << resultado<<endl;
		break;		
		default:
		system("cls");
		cout << "LA OPCION ELEGIDA ES INVALIDA , POR FAVOR VUELVE A ELEGIR DE LAS SIGUIENTES OPCIONES:"<<endl;
		goto comienzo;
		break;
	}	
	system("pause");
	
	return 0;
}



