#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <iostream>
#include <string>

#include "paciente.h"

using namespace std;
class Hospital{
private:

    static const int capacidad=10;
    string nombre;
    Paciente pacientes[capacidad];		// vector de OBJETOS
    int pacientesIngresados;
public:
    Hospital();
    Hospital(string);
    void ingresarPaciente();
    void listarpacientes();

    int getPacientesIngresados();
};

#endif // HOSPITAL_H
