#include "liberman.h"

void error()
{
  cout<<"No se pudo abrir el archivo de registros, asegurese que el archivo se encuentre en\n";
  cout<<"la misma ubicación que el programa o que el archivo de texto se llame: \n";
  cout<<"usuarios.txt, si el archivo tiene otro nombre renómbrelo al ya mencionado\n\n";
}

//Constructores por defecto 
Usuario :: Usuario()
{
  contrasena = " ";
  codigo = " ";
  nombres = " "; 
  apellidos = " ";
  dni = " ";
  correoInsti = " " ;
  celular = " ";
  direccion = " ";
  estdCiv = " ";

}

Admin :: Admin() :Usuario()
{
  Usuario(); 
}

Profesor :: Profesor():Usuario()
{
  cursosEnsena = " ";
  sueldo = " ";
  perfilProf = " ";
  suplente = " ";
}

Alumno :: Alumno():Usuario()
{
  carrera = " ";
  cursos = 0;
  periodoIngreso = " ";
  semestre = 0;
  creditosSemestre = 0;
  creditosAcumulados = 0;
  notas = 0;
  mensualidad = 0;
} 

Menu :: Menu()
{
  Usuario();
  Profesor();
  Alumno();
}


void Menu :: menuAdmin()
{
  int op;
  do
  {
    cout << "\t\t***ADMINISTRADOR***\t\t"<<endl;
    cout << "[1] Crear Usuario" << endl;
    cout << "[2] Modificar Usuario" << endl;
    cout << "[3] Mostrar Datos de Usuario" << endl;
    cout << "[4] Eliminar Usuario" << endl;
    cout << "[5] Salir" << endl;
    cout << "Elija una opción..." << endl;
    cin >> op;
    std::cout << "\033[H\033[2J\033[3J";
    switch (op)
		{
		case 1:
		{
      crearUsuario();
      break;
		}
		case 2:
		{
			modificarUsuario();
			break;
		}
		case 3:
		{
			verUsuario();
			break;
		}
		case 4:
		{
      //eliminarUsuario();
			break;
		}
    case 5:
    {
      break;
    }
		default:
		{
			cout << "Opción no válida" << endl;
			break;
		}
    }
  }
  while(op != 5 );
}

void Menu :: menuProf()
{
  int opc;
  do
  {
    cout << "\t\t***PROFESOR***\t\t"<<endl;
    cout << "[1] Modificar datos personales" << endl;
    cout << "[2] Modificar notas" << endl;
    cout << "[3] Mostrar Usuario" << endl;
    cout << "[4] Mostrar datos Propios" << endl;
    cout << "[5] Salir" << endl;
    cout << "Elija una opción..." << endl;
    cin >> opc;
    std::cout << "\033[H\033[2J\033[3J";
    switch (opc)
		{
      case 1:
      {
        //modificarDatosPer();
        break;
      }
      case 2:
      {
        //modificarNotas();
        break;
      }
      case 3:
      {
        //mostrarUsuario();
        break;
      }
      case 4:
      {
       //mostrarProfesor();
      }
      case 5:
      {
        break;
      }
      default:
      {
        cout << "Opción no válida" << endl;

        break;
      }
    }
  }
  while(opc != 5 );
}

void Menu :: menuAlumno()
{
  int opc;
  do
  {
    cout << "\t\t***ALUMNO***\t\t"<<endl;
    cout << "[1] Modificar datos personales" << endl;
    cout << "[2] Mostrar Datos" << endl;
    cout << "[3] Mostrar Usuario" << endl;
    cout << "[4] Salir" << endl;
    cout << "Elija una opción..." << endl;
    cin >> opc;
    std::cout << "\033[H\033[2J\033[3J";
    switch (opc)
		{
      case 1:
      {
        //modificarDatosPer();
        break;
      }
      case 2:
      {
        //mostrarAlumno();
        break;
      }
      case 3:
      {
        //mostrarUsuario();
        break;
      }
      case 4:
      {
        break;
      }
      default:
      {
        cout << "Opción no válida" << endl;

        break;
      }
    }
  }
  while(opc != 4 );
}

void Menu :: menuPrincipal()
{
  int opc;
  do
  {
    cout << "\t\t***Universidad las chicas superpoderosas***\t\t"<<endl;
    cout << "[1] Administrador" << endl;
    cout << "[2] Profesor" << endl;
    cout << "[3] Alumno" << endl;
    cout << "[4] Salir" << endl;
    cout << "Elija una opción..." << endl;
    cin >> opc;
    std::cout << "\033[H\033[2J\033[3J";
    switch  (opc)
		{
      case 1:
      {
        menuAdmin();
        break;
      }
      case 2:
      {
        menuProf();
        break;
      }
      case 3:
      {
        menuAlumno();
        break;
      }
      case 4:
      {
        break;
      }
      default:
      {
        cout << "Opción no válida" << endl;
        break;
      }
    }
  }
  while(opc != 4 );
}
