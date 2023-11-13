#include <iostream>

#include "paciente.h"
#include "hospital.h"

using namespace std;

// Inicializar la variable estatica
int Paciente::totalPacientes = 0;

int main(){
    //int op;
    // Creando un paciente
    Paciente p("Gorgolito Perez", 58,'m',1.58,45.6,45.3);
    cout<<"rfgrgr";
    // Imprimir datos del paciente
    cout << p.getDatos();

    // Crear un hospital
    Hospital hcam;
    hcam.ingresarPaciente();		// Ingresar un paciente
    hcam.ingresarPaciente();		// Ingresar otro paciente
    hcam.listarpacientes();			// Listar los pacientes

    // Imprimir el total de pacientes
    cout << "Total pacientes: " << Paciente::totalPacientes << endl;
    return 0;
}
