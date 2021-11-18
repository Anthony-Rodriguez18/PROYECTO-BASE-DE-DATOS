#include "liberman.h"

/*void Menu :: verUsuarioAux()
{
  string auxCodigo;
  ifstream mostrar;
  bool encontrado=false;
  mostrar.open("usuarios.txt",ios::in);
  if(mostrar.is_open())
  {
    fflush(stdin);
    cout<<"\t\t\t\t***Ver datos de un Usuario***\t\t\t\t\n\n";
    cin.ignore(1000000, '\n');
    cout<<"Ingresa el código del cliente que deseas consultar detalles: ";
    getline(cin, auxCodigo);
    getline(mostrar,usuario.codigo);
    while(!mostrar.eof())
    {
      getline(mostrar,usuario.contrasena);
      getline(mostrar,usuario.nombres);
      getline(mostrar,usuario.apellidos);
      getline(mostrar,usuario.dni);
      getline(mostrar,usuario.correoInsti);
      getline(mostrar,usuario.celular);
      getline(mostrar,usuario.direccion);
      getline(mostrar,usuario.estdCiv);

      if(auxCodigo==usuario.codigo)
        {
          encontrado=true;
          cout<<"\n\nRegistro Encontrado\n\n";
          cout<<"Código: "<<alumno.codigo<<endl;
          cout<<"Nombres: "<<alumno.nombres<<endl;
          cout<<"Apellidos: "<<alumno.apellidos<<endl;
          cout<<"DNI: "<<alumno.dni<<endl;
          cout<<"Correo Institucional: "<<alumno.correoInsti<<endl;         
          cout<<"Celular: "<<alumno.celular<<endl;
          cout<<"Direccion: "<<alumno.direccion<<endl;
          cout<<"Estado Civil: "<<alumno.estdCiv<<endl;
          cout<<"\n\n";
        }
        getline(mostrar,alumno.codigo);
    }
    if(encontrado==false)
    {
      cout<<"\n\nNo se encontro el registro: "<<auxCodigo<<"\n\n";
    }
  }
  else
  {
    error();
  }

  mostrar.close();


}*/

void Menu :: verUsuarioD()
{
  string auxCodigo;
  ifstream mostrar;
  bool encontrado=false;
  mostrar.open("admin.txt",ios::in);
  if(mostrar.is_open())
  {
    fflush(stdin);
    cout<<"\t\t\t\t***Ver datos de un Administrador***\t\t\t\t\n\n";
    cout<<"Ingresa el código del Administrador que deseas consultar detalles: ";
    cin.ignore(1000000, '\n');
    getline(cin,auxCodigo);
    getline(mostrar,admin.codigo);
    while(!mostrar.eof())
    {
      getline(mostrar,admin.contrasena);
      getline(mostrar,admin.nombres);
      getline(mostrar,admin.apellidos);
      getline(mostrar,admin.dni);
      getline(mostrar,admin.correoInsti);
      getline(mostrar,admin.celular);
      getline(mostrar,admin.direccion);
      getline(mostrar,admin.estdCiv);

      if(auxCodigo== admin.codigo)
        {
          encontrado=true;
          cout<<"\n\nRegistro Encontrado\n\n";
          cout<<"Código: "<<admin.codigo<<endl;
          cout<<"Nombres: "<<admin.nombres<<endl;
          cout<<"Apellidos: "<<admin.apellidos<<endl;
          cout<<"DNI: "<<admin.dni<<endl;
          cout<<"Correo Institucional: "<<admin.correoInsti<<endl;
          cout<<"Celular: "<<admin.celular<<endl;
          cout<<"Direccion: "<<admin.direccion<<endl;
          cout<<"Estado Civil: "<<admin.estdCiv<<endl;
          cout<<"\n\n";
        }
        getline(mostrar,admin.codigo);
    }
    if(encontrado==false)
    {
      cout<<"\n\nNo se encontro el registro: "<<auxCodigo<<"\n\n";
    }
  }
  else
  {
    error();
  }
  mostrar.close();
  
}

void Menu :: verUsuarioP()
{
  string auxCodigo;
  ifstream mostrar;
  bool encontrado=false;
  mostrar.open("prof.txt",ios::in);
  if(mostrar.is_open())
  {
    fflush(stdin);
    cout<<"\t\t\t\t***Ver datos de un Profesor***\t\t\t\t\n\n";
    cout<<"Ingresa el código del profesor que deseas consultar detalles: ";
    cin.ignore(1000000, '\n');
    getline(cin,auxCodigo);
    getline(mostrar,profesor.codigo);
    while(!mostrar.eof())
    {
      getline(mostrar,profesor.contrasena);
      getline(mostrar,profesor.nombres);
      getline(mostrar,profesor.apellidos);      
      getline(mostrar,profesor.dni);
      getline(mostrar,profesor.correoInsti);
      getline(mostrar,profesor.celular);
      getline(mostrar,profesor.direccion);
      getline(mostrar,profesor.estdCiv);
      getline(mostrar,profesor.cursosEnsena);
      getline(mostrar,profesor.sueldo);
      getline(mostrar,profesor.perfilProf);
      getline(mostrar,profesor.suplente);
      


      if(auxCodigo== profesor.codigo)
        {
          encontrado=true;
          cout<<"\n\nRegistro Encontrado\n\n";
          cout<<"Código: "<<profesor.codigo<<endl;
          cout<<"Nombres: "<<profesor.nombres<<endl;
          cout<<"Apellidos: "<<profesor.apellidos<<endl;
          cout<<"Direccion: "<<profesor.direccion<<endl;
          cout<<"Correo: "<<profesor.correoInsti<<endl;
          cout<<"DNI: "<<profesor.dni<<endl;
          cout<<"Celular: "<<profesor.celular<<endl;
          cout<<"Estado Civil: "<<profesor.estdCiv<<endl;
          cout <<"Sueldo: "<<profesor.sueldo<<endl;
          cout<<"Cursos que ensenan: "<<profesor.cursosEnsena<<endl;
          cout<<"perfil profesional: "<<profesor.perfilProf<< endl ;
          cout<<"Suplente (si/no): "<<profesor.suplente<<endl ;
          cout<<"\n\n";
        }
        getline(mostrar,profesor.codigo);
    }
    if(encontrado==false)
    {
      cout<<"\n\nNo se encontro el registro: "<<auxCodigo<<"\n\n";
    }
  }
  else
  {
    error();
  }
  mostrar.close();
}

void Menu :: verUsuarioA()
{
  string auxCodigo;
  ifstream mostrar;
  bool encontrado=false;
  mostrar.open("alumnos.txt",ios::in);
  if(mostrar.is_open())
  {
    fflush(stdin);
    cout<<"\t\t\t\t***Ver datos de un Alumno***\t\t\t\t\n\n";
    cout<<"Ingresa el código del alumno que deseas consultar detalles: ";
    cin.ignore(1000000, '\n');
    getline(cin,auxCodigo);
    getline(mostrar,alumno.codigo);
    while(!mostrar.eof())
    {
      getline(mostrar,alumno.contrasena);
      getline(mostrar,alumno.nombres);
      getline(mostrar,alumno.apellidos);      
      getline(mostrar,alumno.dni);
      getline(mostrar,alumno.correoInsti);
      getline(mostrar,alumno.celular);
      getline(mostrar,alumno.direccion);
      getline(mostrar,alumno.estdCiv);
      getline(mostrar,alumno.carrera);
      mostrar>>alumno.cursos;
      getline(mostrar,alumno.periodoIngreso);
      mostrar>> alumno.semestre;
      mostrar>> alumno.creditosSemestre;
      mostrar>> alumno.creditosAcumulados;
      mostrar>> alumno.mensualidad;

      if(auxCodigo== alumno.codigo)
        {
          encontrado=true;
          cout<<"\n\nRegistro Encontrado\n\n";
          cout<<"Código: "<<alumno.codigo<<endl;
          cout<<"Nombres: "<<alumno.nombres<<endl;
          cout<<"Apellidos: "<<alumno.apellidos<<endl;
          cout<<"DNI: "<<alumno.dni<<endl;
          cout<<"Correo Institucional: "<<alumno.correoInsti<<endl;
          cout<<"Celular: "<<alumno.celular<<endl;
          cout<<"Direccion: "<<alumno.direccion<<endl;
          cout<<"Estado Civil: "<<alumno.estdCiv<<endl;
          cout<<"carrera: "<<alumno.carrera<<endl;
          cout<<"cursos: "<<alumno.cursos<<endl;
          cout<<"periodo de ingreso: "<<alumno.periodoIngreso<<endl;
          cout <<"Semestre: "<<alumno.semestre<<endl;
          cout<<"creditos del semestre: "<<alumno.creditosSemestre<<endl;
          cout<<"creditos acumulados: "<<alumno.creditosAcumulados<<endl;
          cout<<"Mensualidad del alumno: "<<alumno.mensualidad<<endl;
          cout<<"\n\n";
        }
        getline(mostrar,alumno.codigo);
    }
    if(encontrado==false)
    {
      cout<<"\n\nNo se encontro el registro: "<<auxCodigo<<"\n\n";
    }
  }
  else
  {
    error();
  }
  mostrar.close();
}

void Menu :: verUsuario()
{
  cout << endl <<"\t\t\t\t\t*****Mostrar Datos un Usuario*****\t\t\t\t\t";
  char opc;
  cout <<endl<<  "Administrador(D), Profesor(P), Alumno(A): " ;
  cin >> opc;
  switch (opc)
  {
    case 'D': 
    {
      verUsuarioD();
      break;
    }
    case 'P': 
    {
      verUsuarioP();
      break;
    }
    case 'A': 
    {
      verUsuarioA();
      break; 
    }
  }
}