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
