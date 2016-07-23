/* Elizabeth Ortiz
 M00452867
 26 octubre 2014.
Programa_Final.cpp : Defines the entry point for the console application.
Este programa manipula datos de entrada y salida utilizando la estructura de record con varios campos.

Seleccione la estructura de record ya que de esta manera puedo almacenar valores de varios campos. En el caso 
de este programa es como un inventario de cosmeticos y con el mismo se puede manipular los datos del producto.
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct cosmetics
	{
		string makeup_name;
		int by_color[5];		
		int color[5];
		char makeup_use;
		float makeup_price;
	};

	cosmetics datos;

void Menu();
int Entrada_datos();
void Presentar_datos();
int Cambio_datos();
void Terminar();

int index;
int menu;	
int submenu;

int main()
{
	Menu();	

if (menu == 1)
 Entrada_datos();
if (menu == 2)
 Presentar_datos();
if (menu == 3)
Cambio_datos();
if (menu == 4)
Terminar();

	system("pause");
	return 0;
}

void Menu()
{
	cout << "Seleccione opcion del menu 1, 2 3 o 4: \n";
	cout << "1- Entrar los datos" << endl;
	cout << "2- Presentar los datos" << endl;
	cout << "3- Cambiar los datos de un campo especifico" << endl;
	cout << "4- Terminar" << endl;
		 		
	do
	{
		cout << "Seleccion: ";
		cin >> menu;
		} while (menu > 4 && menu < 0);
}

int Entrada_datos()
	{
		cout << "Entre el nombre el maquillaje: \n";
		cout << "Nombre: ";
		cin >> datos.makeup_name;
		cout << "Entre uso del producto:";
		cout << "(a- cara, b- ojos, c- labios): ";
		cin >> datos.makeup_use;

		cout << "Cantidad de " << datos.makeup_name << " por codigo de color: ";
	for(index = 0; index < 5; index++)
		{
		cout << "Color: ";
		cin >> datos.color[5];
		cout << "cantidad: ";
		cin >> datos.by_color[5];	
		}
		cout << "Entre precio de " << datos.makeup_name << ": ";
		cin >> datos.makeup_price;

		Menu();
		return 0;
	}

void Presentar_datos()	
{
	if (datos.makeup_price == 0) 
		{
			cout << "Este record esta vacio\n";
			Menu();
		}
	else
		{
		cout << endl << endl;
		cout << "Presentar los datos: " << endl;
		cout << "Nombre del producto: ";
		cout << datos.makeup_name;
		cout << "\nUso del producto: ";
		cout << datos.makeup_use;
		cout << "\nCantidad de " << datos.makeup_name << " por codigo de color: ";
		cout << "\nColor" << "   Cantidad" << endl;
		for(index = 0; index < 5; index++)
		{		
		cout << datos.color[5]; 
		cout << setw(10) << datos.by_color[5] << endl;
		}
		cout << "\nPrecio de " << datos.makeup_name << ": ";
		cout << datos.makeup_price;

		cout << endl << endl;
		}
		Menu();
}
	
int Cambio_datos()
	{
		cout << "De que campo deseas cambiar datos?\n" << endl;
		cout << "1- Nombre del producto\n";
		cout << "2- Uso del producto\n";
		cout << "3- Cantidad por codigo de color\n";
		cout << "4- Precio del producto\n";
		cin >> submenu;
		if (datos.makeup_price == 0)
		{cout << "Este record esta vacio";
		Menu();
		}
		
		if (submenu == 1)
		{
			cout << "Entre nombre del producto: ";
			cin >> datos.makeup_name;
		}
			if (submenu == 2)
			{
				cout << "Entre uso del producto a, b o c: ";
				cin >> datos.makeup_use;
			}
				if (submenu == 3)
				{
					cout << "Entre Cantidad del producto por codigo de color: ";
					cin >> datos.color[5];
					cin >> datos.by_color[5];

				}
					if (submenu == 4)
					{
						cout << "Entre precio del producto: ";
						cin >> datos.makeup_price;
					}
			Menu();
	return 0;
}

void Terminar()
	{
		cout << "Terminar\n\n";
	}

		
		