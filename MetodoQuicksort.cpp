
#include<iostream>
#include<conio.h>  //lib para esperar tecla antes de finalizar
#define MAX 50
 
using namespace std;
void LeerArreglo(int,int []);
void Quicksort(int [],int,int);
void MuestraArreglo(int,int []);
 
int main(void)
{
   int Numeros[MAX];
   int n;

   cout<<"\n\nNumero de datos del arreglo:"; cin>>n;
 
   LeerArreglo(n,Numeros);  //datos para el array
   Quicksort(Numeros,0,n-1); 
   MuestraArreglo(n,Numeros); //mostar array ordenado
 
    getch();
    return 0;
}
 
void Quicksort(int arreglo[],int primero, int ultimo)
 { int i,j,aux, pivote;
 i=primero;
 j=ultimo;
 pivote=arreglo[(primero+ultimo)/2];//es el elemento medio del arreglo
 do {
 
     while(pivote>arreglo[i])
     i++;
     while(pivote<arreglo[j])
     j--;
     if(i<=j)
     { aux=arreglo[i];
     arreglo[i]=arreglo[j];
     arreglo[j]=aux;
      i++;
      j--;
        }
     }while(i<=j);
     if(primero<j)
       Quicksort(arreglo,primero,j);
     if(ultimo>i)
       Quicksort(arreglo,i,ultimo);
 
  }
 
 
void LeerArreglo(int n,int array[])
{ for(int i=0; i<n; i++)
  {cout<<"\n Ingrese numero: ";  cin>>array[i];}
  }
 
void MuestraArreglo(int n, int array[])
{int i;
 for(i=0; i<n; i++)
     cout<<"["<<array[i]<<"]  ";
}
