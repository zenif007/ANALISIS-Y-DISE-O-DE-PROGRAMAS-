#include<iostream>
#include<fstream>
using namespace std;
class Registro
{
public:
 string Nombre, correo, telefono;
};
int main()
{
 Registro Agenda,LeeAgenda;
 ofstream archivoS("AgendaBin.jpg", ios::binary);

 Agenda.Nombre = "Juan Manuel Gomez";
 Agenda.correo = "juanMgomez@gmail.com";
 Agenda.telefono = "(52) 55 5282 2921";
 archivoS.write((char*)&Agenda, sizeof(Registro));
 archivoS.close();
 ifstream archivoE("AgendaBin.dat", ios::binary);
 archivoE.read((char*)&LeeAgenda, sizeof(Registro));
 std::cout << "Se leyo el registro: " << endl;
 std::cout << " Nombre : " << LeeAgenda.Nombre << endl;
 std::cout << " Correo : " << LeeAgenda.correo << endl;
 std::cout << " Telefono: " << LeeAgenda.telefono << endl;
system("pause>null");
}



//CLASE DEL 7 DE MARZO DEL 2018

#include <stdlibc.h>
#include <iostream>
using namespace std;
#include<stdio.h>

struct fechaFAT12{

unsigned dia: 5;
unsigned mes: 4;
unsigned anio: 7;

}__attribute__((packed));
typedef struct fechaFAT12 FechaFAT12;

struct fecha{
 
 int d;
 int m;
 int a;      
       
};
string DIA[]={"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};
string MES []={"enero","febrero","marzo","abril","mayo","junio","julio","agosto","aptiembre","octubre","noviembre","diciembre"};

void get_fecha(FehaFAT12 *,fecha *);


int main(int argc, char *argv[]){
    FechaFAT12 fF;fF.día=7;fF.mes=3;fF.anio=0b1010101;
    
    fecha f;
    get_fecha(&fF,&f);
    cout<<"Nombre del dia "<<f.d<<" de "<<MES[f.m-1]
        <<" de "<<f.a<<endl;
    
    return 0;
}

// obtener los campos de la strcut fecha a partir de los campos de la struct FechaFAT21

void get_fecha(FechaFAT12 *f_FAT12,fecha *fechaPt){
     fecha->d=f_FAT12->dia;
     fechaPt->m=f_FAT12->mes;
     fechaPT->a=f_FAT12->anio+1980;
     
     
     }

 // 9 DE MARZO DE 2018, PROGRAMA DEW ECUACION DE 2O GRADO

#include<iostream.h>
#include<windows.h>

int main(){
     
     float a,b,c;
     
     cout<<"Dame los valores a,b y c de ecuacion de 20 grado\n";
     cin>>a>>b>>c;
     cout<< resuelve_ecuacion(a,b,c);
     
     system("pause");
     return 0;
     
     }
     
     
int resuelve_ecuacion (float a, float b,float c)
{
    
    float x,x2,discriminante;
    
    discriminante= pow(b,2)-(4*a*c);
    x=((-1*b)+ sqrt(discriminante))/(2*a);
    x2=((-1*b)- sqrt(discriminante))/(2*a);
    
    if(inferior=0)
        cout<<"El valor de a no puede ser cero\n"; 
    else if(discriminante<0)
        cout<<"El discrimintante es menor de 0\n";
    else
        return x,x2;       
}



