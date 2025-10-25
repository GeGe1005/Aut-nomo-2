//Ejercicio 3
#include <iostream>
#include <cmath>//Importante porque estamosn usando problemas matematicos.
using namespace std;
int main()
{
int opcion;
double a, b, resultado;
char continuar;
while (true)
{
   cout<<" Calculadora Avanzada - Menu de Opciones. "<<endl;
   cout<<" 1. Suma "<<endl;
   cout<<" 2. Resta "<<endl;
   cout<<" 3. Multiplicacion "<<endl;
   cout<<" 4. Dividir "<<endl;
   cout<<" 5. Potencia (A^B) "<<endl;
   cout<<" 6. Raiz cuadrada (√A) "<<endl;
   cout<<" 7. Salir "<<endl;
   cout<<" Seleccione una opcion: ";
   cin>>opcion;
   if(opcion==7)
   {
   	cout<<" Salienhdo de la calculadora. Gracias por usarla."<<endl;
   	break;
   }
   else if(opcion>=1 && opcion <=6)
   switch(opcion)
   {
   	case 1:
 cout<<" Ingrese el primer numero (A): ";
 cin>>a;
 cout<<" Ingrese el segundo numero(B): ";
 cin>>b;
 resultado=a+b;
 cout<<" Resultado: "<<a<<" + "<<b<<" = "<<resultado<<endl;
 break;
     case 2:
 cout<<" Ingrese el primer numero (A): ";
 cin>>a;
 cout<<" Ingrese el segundo numero(B): ";
 cin>>b;
 resultado=a-b;
 cout<<" Resultado: "<<a<<" - "<<b<<" = "<<resultado<<endl;
 break;
     case 3:
 cout<<" Ingrese el primer numero (A): ";
 cin>>a;
 cout<<" Ingrese el segundo numero(B): ";
 cin>>b;
 resultado=a*b;
 cout<<" Resultado: "<<a<<" * "<<b<<" = "<<resultado<<endl;
 break;
     case 4:
 cout<<" Ingrese el primer numero (A): ";
 cin>>a;
 do
 {
 cout << " Ingrese el segundo numero (B, no puede ser cero): ";
 cin>>b;
 if(b==0)
 {
 cout << " Error: No se puede dividir por cero. Intente de nuevo. "<<endl;
 }
 }
 while(b==0);
 resultado=a/b;
 cout<<" Resultado: "<<a<<" / "<<b<<" = "<<resultado<<endl;
 break;
     case 5:
do
{
 cout<<" Ingrese la base (A, debe ser positiva): ";
 cin>>a;
 if(a<=0)
 {
 cout<<" Error: La base debe ser positiva. Intente de nuevo. "<<endl;
 }
}
 while(a<=0);
 cout<<" Ingrese el exponente (B): ";
 cin>>b;
 resultado=pow(a,b);
 cout<<" Resultado: "<<a<<" ^ "<<b<<" = "<<resultado<<endl;
 break;
     case 6:
 do
{
 cout<<" Ingrese el numero (A, debe de ser positivo): ";
 cin>>a;
 if(a<0)
{
 cout<<" Error: No se puede calcular la raiz cuadrada de un numero negativo. Intente de nuevo. "<<endl;
}//No s epueden colocar numeros negativos ya que el programa no está incluido.
}
while(a<0);
 resultado=sqrt(a);
 cout<<" Resultado: √ "<<a<<" = "<<resultado<<endl;
break;
}
cout<<" Quiere hacer otra operacion? (s/n): ";
cin>>continuar;
if(continuar!='s' && continuar !='S')
{
 cout<<" Saliendo de la calculadora. Gracias por usar nuestro servicio. "<<endl;
 break;
}
}
	return 0;
}