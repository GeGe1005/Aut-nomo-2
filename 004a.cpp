//Ejercicio 4
#include <iostream>
#include <string>
using namespace std;
int main()
{
string usuario_correcto="bjyx";
string password_correcto="1991";
int saldo=100, max_intento=3;
int intento=0;
cout<<" SISTEMA DE CONTROL DE ACCESO " <<endl;
while(intento<max_intento)
 {
 string usuario, password;
 cout<<" Ingrese su nombre de usuario: ";
 cin>>usuario;
 cout<<" Ingrese su clave: ";
 cin>>password;
 if(usuario==usuario_correcto &&password==password_correcto)
  {
 cout<<" Sistema de acceso "<<endl;
 break;
  }
 else
{
intento++;
if(intento<max_intento)
   {
 cout<<" Informacion incorrecta. Intentos disponibles :  "<<(max_intento-intento)<<endl;
  }
 }
}
if(intento==max_intento)
{
cout<<" Acceso bloqueado. Sistema finalizado. "<<endl;
return 0;
}
int opcion;
do
{
 cout<<" Menu de opciones: "<<endl;
 cout<<" 1. Consultar saldo "<<endl;
 cout<<" 2. Cambiar clave "<<endl;
 cout<<" 3. Salir "<<endl;
 cout<<" Seleccione una opcion: ";
 cin>>opcion;
 switch(opcion)
 {
   case 1:
   	cout<<"Su saldo actual es: $ "<<saldo<<endl;
   	break;
   case 2:
   	{
	string nueva_password, confirmar_password;
	bool passwords_coinciden=false;
	while(!passwords_coinciden)
     {
 	cout<<" Ingrese la nueva clave: ";
 	cin>>nueva_password;
 	cout<<" Confirme la nueva clave: ";
 	cin>>confirmar_password;
 	if(nueva_password==confirmar_password)
 	{
	password_correcto=nueva_password;
	cout<<" Clave cambiada exitosamente. "<<endl;
	passwords_coinciden=true;
 	}
 	else
 	{
	cout<<" Las credenciales no coinciden. Intente nuevamente. "<<endl;
 	}
   }
 break;
  }
     case 3:
 	cout<<" Saliendo del sistema. Regresa nuevamente. "<<endl;
 	break;
 	default:
	cout<<" Opcion invalida. Seleccione una de las 3 opciones. "<<endl;
	break;
  }
 }
while(opcion!=3);
return 0;
}
