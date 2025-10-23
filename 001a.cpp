//EJERCICIO 1
#include <iostream>
using namespace std;
int main()
{
    int voto, votoa=0, votob=0, votoc=0, total=0;
    cout<<" Bienvenido al sistema de votacion: "<<endl;
    cout<<" Opcion: "<<endl;
    cout<<" 1 - Candidato A "<<endl;
    cout<<" 2 - Candidato B "<<endl;
    cout<<" 3 - Candidato C "<<endl;
    cout<<" 0 para terminar la votacion "<<endl;
   while(true)
   {
	   	cout<<" Ingrese su voto: ";
   		cin>>voto;
   		if (voto==0)//Es el codigo para terminar la votacion, sino sera un bucle infinito.
   	   {
  	   break;
	   }
   else if (voto==1)
   	   {
   	   votoa++;
   	   total++;
   	   }
   else if (voto==2)
   	   {
   	votob++;
   	total++;
	   }
   else if (voto==3)
   	   {
   	votoc++;
   	total++;
	   }
   else
   	  {
   	cout<<" Voto invalido. Intente de nuevo. "<<endl;
       }
   }
   cout<<" Resultados de la eleccion: "<<endl;
   cout<<" Candidato A: "<<votoa<<" Votos "<<endl;
   cout<<" Candidato B: "<<votob<<" Votos "<<endl;
   cout<<" Candidato C: "<<votoc<<" Votos "<<endl;
   cout<<" Total de votantes: "<<total<<endl;
    return 0;
}