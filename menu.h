
class Menu
{
  public:
  Menu();
  Usuario usuario; 
  Admin admin; 
  Profesor profesor; 
  Alumno alumno; 

  void menuPrincipal();
  void crearAdmin();
  void crearProf();
  void crearAlumno();
  void crearUsuario();
  
  //USUARIO
  void verUsuarioAux();

  //ADMIN
  void menuAdmin();
  void eliminarUsuario();
  void verUsuario();
  void verUsuarioD();
  void modificarUsuario();
  void modificarUsuarioD();
  void mostarRegistroD(string codigo);

  //PROF
  void menuProf();
  void modificarNotas();
  void modificarUsuarioP();
  void mostarRegistroP(string codigo);
  void modificarDatosP();
  void mostrarDatosP();
  void verUsuarioP();

  //ALUMNO
  void menuAlumno();
  void modificarUsuarioA();
  void mostarRegistroA(string codigo);
  void modificarDatosA();
  void mostrarDatosA();
  void verUsuarioA();
};

void error();