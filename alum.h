
class Alumno : public Usuario 
{
  public: 
  string carrera;
  int cursos; 
  string periodoIngreso;
  int semestre;
  int creditosSemestre;
  int creditosAcumulados;
  double notas;
  float mensualidad; 

  Alumno();
  void crearAlumno();
  //void menuAlumno();
  //void modificarDatosA();
  //void mostrarDatosA();

};