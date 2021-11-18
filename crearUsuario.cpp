
#include "liberman.h"

void Menu :: crearAdmin()
{
  ofstream escritura;
  ifstream verificador;
  string auxcodigo;
  bool coincidencia=false;
  verificador.open("admin.txt",ios::in);
  escritura.open("admin.txt",ios::app);
  if(escritura.is_open()&&verificador.is_open())
  {
    cin.ignore(1000000, '\n');
    cout<<"Ingresa el código del usuario: ";
    getline(cin,auxcodigo);
    if(auxcodigo==" ")
    {
      do
      {
        cout<<"código de usuario no válido!, intentalo nuevamente: ";
        getline(cin,usuario.codigo);
      }
      while(auxcodigo==" ");
    }
    do
    {
      verificador.seekg(0);
      getline(verificador,admin.codigo);
      while(!verificador.eof())
      {
        getline(verificador,admin.contrasena);
        getline(verificador,admin.nombres);
        getline(verificador,admin.apellidos);        
        getline(verificador,admin.dni);
        getline(verificador,admin.correoInsti);
        getline(verificador,admin.celular);
        getline(verificador,admin.direccion);
        getline(verificador,admin.estdCiv);

        if(admin.codigo==auxcodigo)
        {
          coincidencia=true;
          cout<<"\n\nYa existe un usuario con ese código!\n\n";
          cout<<"El usuario con ese código es: "<<admin.nombres<<"\n\n";
          cout<<"Ingresa un código válido: ";
          getline(cin,auxcodigo);
          if(auxcodigo=="")
          {
            do
            {
              cout<<"\ncódigo de usuario no válido!, intentalo nuevamente: ";
              getline(cin,auxcodigo);
            }
            while(auxcodigo=="");
            break;
          }
        }
        getline(verificador,admin.codigo);
      }
      if(verificador.eof()&&auxcodigo!=admin.codigo)
      coincidencia=false;
    }
    while(coincidencia==true);
    
    cout << "\033[H\033[2J\033[3J";
    cout<<"\t\t\t\t***Crear un usuario***\t\t\t\t\n\n";  
    admin.codigo=auxcodigo;
    cout << endl <<"Ingrese los siguientes datos: ";
    cin.ignore(1000000, '\n');
    cout<<endl  <<  "Contrasena: "; 
    getline(cin,admin.contrasena);
    cout << endl << "Nombres: "; 
    getline(cin, admin.nombres); 
    cout << endl << "Apellidos: ";
    getline(cin, admin.apellidos);
    cout << endl << "DNI: ";
    getline(cin,admin.dni);
    cout << endl << "Correo institucional: ";
    getline(cin,admin.correoInsti)  ;
    cout << endl << "Celular: ";
    getline(cin, admin.celular);
    cout << endl << "Dirección: ";
    getline(cin,admin.direccion);
    cout << endl << "Estado civil: ";
    getline(cin,admin.estdCiv);

    escritura<<admin.codigo<<endl<<admin.contrasena<<endl<<admin.nombres<<endl<< admin.apellidos <<endl << admin.dni<<endl << admin.correoInsti<<endl<<admin.celular<< endl<<admin.direccion<<endl<<admin.estdCiv<<endl;

    cout<<"El registro se ha completado correctamente.\n\n";
    cout << "\033[H\033[2J\033[3J";
  }
  else
  {
    error();
  }
  escritura.close();
  verificador.close();
}

void Menu :: crearAlumno()
{
  ofstream escritura;
  ifstream verificador;
  string auxcodigo;
  bool coincidencia=false;
  verificador.open("alumnos.txt",ios::in);
  escritura.open("alumnos.txt",ios::app);
  if(escritura.is_open()&&verificador.is_open())
  {
    cin.ignore(1000000, '\n');
    cout<<"Ingresa el código del usuario: ";
    getline(cin,auxcodigo);
    if(auxcodigo==" ")
    {
      do
      {
        cout<<"código de usuario no válido!, intentalo nuevamente: ";
        getline(cin,usuario.codigo);
      }
      while(auxcodigo==" ");
    }
    do
    {
      verificador.seekg(0);
      getline(verificador,alumno.codigo);
      while(!verificador.eof())
      {
        getline(verificador,alumno.contrasena);
        getline(verificador,alumno.nombres);
        getline(verificador,alumno.apellidos);      
        getline(verificador,alumno.dni);
        getline(verificador,alumno.correoInsti);
        getline(verificador,alumno.celular);
        getline(verificador,alumno.direccion);
        getline(verificador,alumno.estdCiv);
        getline(verificador,alumno.carrera);
        verificador>>alumno.cursos;
        getline(verificador,alumno.periodoIngreso) ;
        verificador>> alumno.semestre;
        verificador>> alumno.creditosSemestre;
        verificador>> alumno.creditosAcumulados;
        verificador>> alumno.mensualidad;

        if(alumno.codigo==auxcodigo)
        {
          coincidencia=true;
          cout<<"\n\nYa existe un usuario con ese código!\n\n";
          cout<<"El usuario con ese código es: "<<alumno.nombres<<"\n\n";
          cout<<"Ingresa un código válido: ";
          getline(cin,auxcodigo);
          if(auxcodigo=="")
          {
            do
            {
              cout<<"\ncódigo de usuario no válido!, intentalo nuevamente: ";
              getline(cin,auxcodigo);
            }
            while(auxcodigo=="");
            break;
          }
        }
        getline(verificador,alumno.codigo);
      }
      if(verificador.eof()&&auxcodigo!=alumno.codigo)
      coincidencia=false;
    }
    while(coincidencia==true);
    
    cout << "\033[H\033[2J\033[3J";
    cout<<"\t\t\t\t***Crear un usuario***\t\t\t\t\n\n";    alumno.codigo=auxcodigo;
    cout << endl <<"Ingrese los siguientes datos: ";
    cin.ignore(1000000, '\n');
    cout<<endl  <<  "Contrasena: "; 
    getline(cin,alumno.contrasena);
    cout << endl << "Nombres: "; 
    getline(cin, alumno.nombres); 
    cout << endl << "Apellidos: ";
    getline(cin, alumno.apellidos);
    cout << endl << "DNI: ";
    getline(cin,alumno.dni);
    cout << endl << "Correo institucional: ";
    getline(cin,alumno.correoInsti)  ;
    cout << endl << "Celular: ";
    getline(cin, alumno.celular);
    cout << endl << "Dirección: ";
    getline(cin,alumno.direccion);
    cout << endl << "Estado civil: ";
    getline(cin,alumno.estdCiv);
    cout<<endl<<"carrera: ";
    getline(cin, alumno.carrera);
    cout<<endl<<"cursos: ";
    cin >> alumno.cursos;
    cin.ignore(1000000, '\n');
    cout<<endl<<"periodo de ingreso: ";
    getline(cin, alumno.periodoIngreso);
    cout<<endl <<"Semestre: ";
    cin>> alumno.semestre;
    cout<<endl<<"creditos del semestre actual: ";
    cin>> alumno.creditosSemestre;
    cout<<endl<<"creditos acumulados: ";
    cin>> alumno.creditosAcumulados;
    cout<<endl<<"Mensualidad del alumno: ";
    cin>> alumno.mensualidad;

    escritura<<alumno.codigo<<endl<<alumno.contrasena<<endl<<alumno.nombres<<endl<< alumno.apellidos <<endl << alumno.dni<<endl << alumno.correoInsti<<endl<<alumno.celular<< endl<<alumno.direccion<<endl<<alumno.estdCiv<<endl<<alumno.carrera<<endl<<alumno.cursos<<endl<<alumno.periodoIngreso<<endl<<alumno.semestre<<endl<<alumno.creditosSemestre<<endl<<alumno.creditosAcumulados<<endl<<alumno.mensualidad<<endl;

    cout<<"El registro se ha completado correctamente.\n\n";
    cout << "\033[H\033[2J\033[3J";
  }
  else
  {
    error();
  }
  escritura.close();
  verificador.close();
}

void Menu :: crearProf()
{
  ofstream escritura;
  ifstream verificador;
  string auxcodigo;
  bool coincidencia=false;
  verificador.open("prof.txt",ios::in);
  escritura.open("prof.txt",ios::app);
  if(escritura.is_open()&&verificador.is_open())
  {
    cin.ignore(1000000, '\n');
    cout<<"Ingresa el código del usuario: ";
    getline(cin,auxcodigo);
    if(auxcodigo==" ")
    {
      do
      {
        cout<<"código de usuario no válido!, intentalo nuevamente: ";
        getline(cin,usuario.codigo);
      }
      while(auxcodigo=="");
    }
    do
    {
      verificador.seekg(0);
      getline(verificador,profesor.codigo);
      while(!verificador.eof())
      {
        getline(verificador,profesor.contrasena);
        getline(verificador,profesor.nombres);
        getline(verificador,profesor.apellidos);      
        getline(verificador,profesor.dni);
        getline(verificador,profesor.correoInsti);
        getline(verificador,profesor.celular);
        getline(verificador,profesor.direccion);
        getline(verificador,profesor.estdCiv);
        getline(verificador,profesor.cursosEnsena);
        verificador >> profesor.sueldo;
        getline(cin,profesor.perfilProf);
        getline(cin,profesor.suplente);

        if(profesor.codigo==auxcodigo)
        {
          coincidencia=true;
          cout<<"\n\nYa existe un usuario con ese código!\n\n";
          cout<<"El usuario con ese código es: "<<profesor.nombres<<"\n";
          cout<<"Ingresa un código válido: ";
          getline(cin,auxcodigo);
          if(auxcodigo==" ")
          {
            do
            {
              cout<<"\ncódigo de usuario no válido!, intentalo nuevamente: ";
              getline(cin,auxcodigo);
            }
            while(auxcodigo=="");
            break;
          }
        }
        getline(verificador,profesor.codigo);
      }
      if(verificador.eof()&&auxcodigo!=profesor.codigo)
      coincidencia=false;
    }
    while(coincidencia==true);
    
    profesor.codigo = auxcodigo;
    cout <<endl << "Ingrese los siguientes datos: ";
    //cin.ignore(1000000, '\n');
    cout<<endl  <<  "Contrasena: "; 
    getline(cin,profesor.contrasena);
    cout << endl << "Nombres: "; 
    getline(cin, profesor.nombres); 
    cout << endl << "Apellidos: ";
    getline(cin, profesor.apellidos);
    cout << endl << "DNI: ";
    getline(cin,profesor.dni);
    cout << endl << "Correo institucional: ";
    getline(cin,profesor.correoInsti)  ;
    cout << endl << "Celular: ";
    getline(cin, profesor.celular);
    cout << endl << "Dirección: ";
    getline(cin,profesor.direccion);
    cout << endl << "Estado civil: ";
    getline(cin,profesor.estdCiv);
    cout << endl << "Cursos que ensenan: ";
    getline(cin,profesor.cursosEnsena);
    cout << endl << "Sueldo: " ;
    cin >> profesor.sueldo;
    cin.ignore(1000000, '\n');
    cout << endl << "perfil profesional: " ;
    getline(cin,profesor.perfilProf);
    cout <<endl << "Suplente (si/no): ";
    getline(cin,profesor.suplente);

    escritura<<profesor.codigo<<endl<<profesor.contrasena<<endl<<profesor.nombres<<endl<< profesor.apellidos <<endl<< profesor.dni<<endl<< profesor.correoInsti<<endl<<profesor.celular<< endl<<profesor.direccion<<endl<<profesor.estdCiv<<endl<<profesor.cursosEnsena<<endl<<profesor.sueldo<<endl<<profesor.perfilProf<<endl<<profesor.suplente<<endl;

    cout<<"El registro se ha completado correctamente.\n\n";
    cout << "\033[H\033[2J\033[3J";
  }
  else
  {
    error();
  }
  escritura.close();
  verificador.close();
}

void Menu :: crearUsuario()
{
  cout << endl <<"\t\t\t\t\t*****Crear un Usuario*****\t\t\t\t\t";
  char opc;
  cout <<endl<<  "Administrador(D), Profesor(P), Alumno(A): " ;
  cin >> opc;
  switch (opc)
  {
    case 'D': 
    {
      crearAdmin();
      break;
    }
    case 'P': 
    {
      crearProf();
      break;
    }
    case 'A': 
    {
      crearAlumno();
      break; 
    }
  }
}