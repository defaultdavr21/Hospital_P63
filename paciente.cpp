#include "paciente.h"

using namespace std;

Paciente::Paciente() {
}

Paciente::Paciente(string nombre, int edad, char genero, float altura, float masa, float imc) :
    nombre(nombre), edad(edad), genero(genero), altura(altura), masa(masa), imc(imc), positivo(false)
{
    // Incrementa el total de pacientes "creados" (instanciados)
    Paciente::totalPacientes++;
    // Asignar un numero al paciente
    id = Paciente::totalPacientes;
}
void Paciente::setPositivo(bool valor){
    this->positivo = valor;
}

bool Paciente::getPositivo(){
    return this->positivo;
}

string Paciente::estaContagiado(){
    return this->positivo ? "Si" : "No";
}

void Paciente::setgenero(char genero){
    this ->genero=genero;
}

char Paciente::getgenero()
{
    return this ->genero='m' or 'f';
}
float Paciente::setimc(){
    this ->imc;
}

float Paciente::getimc(float masa, float altura)
{
    return this ->imc=(masa/altura*altura);
}

string Paciente::getDatos(){
    return "ID: " + to_string(this->id) + "\n" +
            "Nombre: " + this->nombre + "\n" +
            "Edad: " + to_string(this->edad) + "\n" +
            "Genero: "+ to_string(this->genero)+ "\n" +
            "Altura: "+ to_string(this->altura)+ "\n" +
            "Masa: "+ to_string(this->masa)+ "\n" +
            "El IMC es: "+ to_string(this->imc)+ "\n" +
            "Tiene Covid-19: " + this->estaContagiado() + "\n\n";
}










