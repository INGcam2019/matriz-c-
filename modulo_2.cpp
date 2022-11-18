#include<iostream>
using namespace std;

int main(){
	int productos[50][3];
	int cantProductos;
	string opcion="S";
	do{
	
	cout<<"ingrese la cantidad de productos a calcular"<<endl;
	cin>>cantProductos;
	//primer for indica cuantas filas(horizontal) tendra la  lista y el segundo cuenta cuantas columnas (vertical)listas se crearan
	for(int i=0;i<cantProductos;i++) {
		for(int j=0;j<3;j++) {
			if(j==0) {
				cout<<"ingrese la cantidad del producto "<<i+1<<endl;
			
			}
			if(j==1) {
				cout<<"ingrese el valor unitario del producto "<<i+1<<endl;
			
			}
			if(j==2) {
				cout<<"ingrese el porcentaje de descuento del  producto "<<i+1<<endl;
			
			}
			cin>>productos[i][j];
		}		
		}
	system("cls");
	cout<<"Cantidad "<<"Valun "<<"procentaje %";
	for(int i=0;i<cantProductos;i++) {
		cout<<endl;
		for(int j=0;j<3;j++) {
			
			cout<<productos[i][j]<<"          ";
			
		}	
		cout<<endl;	
	}
	int resultado;
	for(int i=0;i<cantProductos;i++) {
		cout<<endl;
		for(int j=0;j<3;j++) {
			resultado=productos[i][0]*productos[i][1]-productos[i][2];
			
			
		}	
		cout<<"valor total del producto "<<i<<" es:"<<endl;
		cout<<resultado<<endl;	
	}
	
	cout<<"si no desea agregar mas lista oprima N, de lo contrario imprima S"<<endl;
	cin>>opcion;
	}while(opcion=="S");

	cout<<"camilo muñoz"<<endl;
}	
	
