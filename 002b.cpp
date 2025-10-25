//Ejercicio 2
#include <iostream>
using namespace std;
int main()
{
    int opcion;
    double monto, final;
    do
    {
        cout<<" Metodo de pago: "<<endl;
        cout<<"   1. Pagar con tarjeta de credito "<<endl;
        cout<<"   2. Pagar con tarjeta de debito "<<endl;
        cout<<"   3. Pagar en efectivo "<<endl;
        cout<<"   4. Salir "<<endl;
        cout<<" Seleccione una opcion: ";
        cin>>opcion;
        
        if(opcion>=1 && opcion <=3)
        {
            cout<<" Ingrese el monto total de la compra: ";
            cin>>monto;
            
            if(opcion==1)
            {
                final=monto+(monto*0.05);//Se aplica una comisión del 5%
                cout<<" Paga con tarjeta de credito. Pago final (Comision del 5%): $ "<<final<<endl;
            }
            else if(opcion==2)
            {
                final=monto;//No se le incrementa la comision.
                cout<<" Pago con tarjeta de debito. Pago final (Sin comision): $ "<<final<<endl;
            }
            else if (opcion==3)
            {
                final=monto-(monto*0.02);//Se aplica un descuento del 2%
                cout<<" Pago en efectivo. Pago final (Descuento del 2%): $ "<<final<<endl;
            }
            cout<<" Valor original: $ "<<monto<<endl;
            cout<<" Total a pagar: $ "<<final<<endl;
        }
        else if(opcion==4)
        {
            cout<<" Saliendo del sistema de pago. Muchas gracias por usar nuestros servicios. "<<endl;
        }
        else
        {
            cout<<" Opcion invalida. Intente nuevamente. "<<endl;
        }
    }
    while(opcion!=4);//Repetira el ciclo hasta que el usuario seleccione una opcion.
    return 0;
}