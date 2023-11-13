
#include "hospital.h"


Hospital::Hospital(){
}

Hospital::Hospital(string nombre) :
    nombre(nombre), pacientesIngresados(0)
{

}

void Hospital::ingresarPaciente(){
    Paciente paciente;
    string nombre;
    int edad;
    bool estaContagiado;
    char genero;
    float altura;
    float masa;
    float imc;

    cout << "\nIngrese el nombre del paciente: ";
    getline(cin>>ws, nombre);
    cout << "Ingrese la edad del paciente: ";
    cin >> edad;
    cout << "Ingrese el genero del paciente: ";
    cin >> genero;
    cout << "Ingrese la altura del paciente: ";
    cin >> altura;
    cout << "Ingrese la masa del paciente: ";
    cin >> masa;

    // IMPORTANTISIMO !!!
    // Obtener el indice para el vector de pacientes
    int indice = this->pacientesIngresados;

    // Crear el objeto y guardar en el vector
    this->pacientes[indice] = Paciente(nombre,edad,genero,altura,masa,imc);

    cout << "El imc del paciente es: "<<endl;


    cout << "Tiene Covit-19 (1=Si, 0=No): ";
    cin >> estaContagiado;
    this->pacientes[indice].setPositivo(estaContagiado);

    //cin.ignore();		// limpiar el buffer de cin (siempre que utilizo strings utilizo esto)

    this->pacientesIngresados++;
}

void Hospital::listarpacientes(){
    cout << "\n= =  HOSPITAL " + this->nombre + " = =" << endl;
    for (int i=0; i < this->pacientesIngresados; i++){
        cout << this->pacientes[i].getDatos();
    }
}


















