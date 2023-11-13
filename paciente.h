#ifndef PACIENTE_H
#define PACIENTE_H


#include <string>
using namespace std;

class Paciente{
private:
    int id;				// Numero de identificacion del paciente
    string nombre;		// Nombre del paciente
    int edad;			// Edad del paciente
    char genero;
    float altura;
    float masa;
    float imc;
    bool positivo;      // Si la prueba de Covid-19 es positiva
    string estaContagiado();	// Retorna Si o No segun la prueba (positivo)

public:
    Paciente();					// Constructor por defecto
    Paciente(string, int, char, float, float, float);	// Constructor
    void setPositivo(bool);		// Establecer si la prueba es positiva
    bool getPositivo();			// Obtener si el paciente dio positivo en la prueba
    void setgenero(char);
    char getgenero();
    float setimc();
    float getimc(float, float);
    string getDatos();          // Obtener un string con los datos del paciente

    static int totalPacientes;	// Llevar la cuenta de pacientes
};

#endif // PACIENTE_H
