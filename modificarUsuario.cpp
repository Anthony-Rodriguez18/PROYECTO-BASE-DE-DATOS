#include "liberman.h"

void Menu :: modificarUsuario()
{
  cout << endl <<"\t\t\t\t\t*****Mostrar Datos un Usuario*****\t\t\t\t\t";
  char opc;
  cout <<endl<<  "Administrador(D), Profesor(P), Alumno(A): " ;
  cin >> opc;
  switch (opc)
  {
    case 'D': 
    {
      modificarUsuarioD();
      break;
    }
    case 'P': 
    {
      modificarUsuarioP();
      break;
    }
    case 'A': 
    {
      modificarUsuarioA();
      break; 
    }
  }
}

void Menu::mostarRegistroD(string codigo)
{

    ifstream mostrar;
    mostrar.open("admin.txt",ios::in);
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

        if(codigo==admin.codigo)
        {
          cout<<"\n\nRegistro Encontrado\n\n";
          cout<<"Código: "<<admin.codigo<<endl;
          cout<<"Contraseña: "<<admin.contrasena<<endl;
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

    mostrar.close();
}

void Menu::modificarUsuarioD()
{
  ifstream lectura;
  ifstream verificador;
  ofstream auxiliar;
  string auxCodigo;
  string codigoModif;
  string auxContra;
  string auxNombres;
  string auxApellidos;
  string auxDNI;
  string auxCorreoInsti;
  string auxCelular;
  string auxDireccion;
  string auxEstdCiv;
  bool encontrado=false;
  bool coincidencia=false;
  bool mismoCodigo=false;
  lectura.open("admin.txt",ios::in);
  verificador.open("admin.txt",ios::in);
  auxiliar.open("auxiliar.txt",ios::out);
  cout<<"\t\t\t\t***Modificar los datos de un usuario***\t\t\t\t\n\n";
  if(lectura.is_open()&&verificador.is_open()&&auxiliar.is_open())
  {
    fflush(stdin);
    cout<<"Ingresa el codigo del usuario que deseas modificar: ";
    cin.ignore(1000000, '\n');
    getline(cin,auxCodigo);

    if(auxCodigo==" ")
    {
      do
      {
        cout<<"codigo de usuario no valido!, intentalo nuevamente: ";
        getline(cin,auxCodigo);
      }
      while(auxCodigo==" ");
    }

    codigoModif=auxCodigo;

    getline(lectura,admin.codigo);
    while(!lectura.eof())
    {
      getline(lectura,admin.contrasena);
      getline(lectura,admin.nombres);
      getline(lectura,admin.apellidos);
      getline(lectura,admin.dni);
      getline(lectura,admin.correoInsti);
      getline(lectura,admin.celular);
      getline(lectura,admin.direccion);
      getline(lectura,admin.estdCiv);

      if(auxCodigo==admin.codigo)
      {
        encontrado=true;
        mostarRegistroD(codigoModif);
        cout<<"**********************************************";
        cout<<"\n\n";
        cout<<"Ingresa la nueva informacion para el usuario\n\n";
        fflush(stdin);
        cout<<"Ingresa el codigo del usuario: ";
        getline(cin,auxCodigo);
        if(auxCodigo==codigoModif)
        {
          mismoCodigo=true;
        }
        if(mismoCodigo==false)
        {
          do
          {
            if(auxCodigo==codigoModif)
            {
              coincidencia=false;
              break;
            }
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

              if(auxCodigo==admin.codigo)
              {
                coincidencia=true;
                cout<<"\n\nYa existe un usuario con ese codigo!\n\n";
                cout<<"El usuario con ese codigo es: "<<admin.nombres<<"\n\n";
                cout<<"Ingresa un codigo valido!: ";
                getline(cin,auxCodigo);

                if(auxCodigo==" ")
                {
                  do
                  {
                    cout<<"\ncodigo de usuario no valido!, ";
                    cout<<"intentalo nuevamente: ";
                    getline(cin,auxCodigo);
                  }
                  while(auxCodigo=="");
                }
                break;
              }

              getline(verificador,admin.codigo);
            }

            if(verificador.eof()&&auxCodigo!=admin.codigo)
            {
              coincidencia=false;
            }

          }
          while(coincidencia==true);
        }
      cout << "\033[H\033[2J\033[3J";
      cout<<"***Modificar los datos de un usuario***\n\n";
      cout<<"Ingresa el codigo del administrador que deseas modificar: ";
      cout<<codigoModif;
      mostarRegistroD(codigoModif);
      cout<<"**********************************************";
      cout<<endl;
      cout<<"Ingresa la nueva informacion para el usuario\n";
      cout<<"Ingresa el codigo del usuario: ";
      cout<<auxCodigo;
      fflush(stdin);
      cout<<endl  <<  "Contrasena: "; 
      getline(cin,auxContra);
      fflush(stdin);
      cout<<"Nombres: ";
      getline(cin,auxNombres);;
      fflush(stdin);
      cout << endl << "Apellidos: ";
      getline(cin, auxApellidos);
      fflush(stdin);
      cout << endl << "DNI: ";
      getline(cin,auxDNI);
      fflush(stdin);
      cout << endl << "Correo institucional: ";
      getline(cin,auxCorreoInsti) ;
      fflush(stdin);
      cout << endl << "Celular: ";
      getline(cin, auxCelular);
      fflush(stdin);
      cout << endl << "Dirección: ";
      getline(cin,auxDireccion);
      fflush(stdin);
      cout << endl << "Estado Civil: ";
      getline(cin,auxEstdCiv);

      auxiliar<<auxCodigo<<endl<<auxContra<<endl<<auxNombres<<endl<<auxApellidos<<auxDNI<<endl<<auxCorreoInsti<<endl<<auxCelular<<endl<<auxDireccion<<endl<<auxEstdCiv<<endl;
      cout<<"El Registro se ha modificado correctamente.\n\n";
      }

        else
        {
          auxiliar<<admin.codigo<<endl<<admin.contrasena<<endl<<admin.nombres<<endl<<admin.apellidos<<endl<<admin.dni<<endl<<endl<<admin.correoInsti<<endl<<endl<<admin.celular<<endl<<endl<<admin.direccion<<endl<<admin.estdCiv<<endl;
        }


            getline(lectura,admin.codigo);
        }

    }

    else
    {
      error();
    }

    if(encontrado==false)
    {
      cout<<"\n\nNo se encontro ningun registro con ese codigo!\n\n";
    }
    lectura.close();
    verificador.close();
    auxiliar.close();
    remove("admin.txt");
    rename("auxiliar.txt","admin.txt");
}

void Menu::mostarRegistroP(string codigo)
{

    ifstream mostrar;
    mostrar.open("profe.txt",ios::in);
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

        if(codigo==profesor.codigo)
        {
          cout<<"\n\nRegistro Encontrado\n\n";
          cout<<"Código: "<<profesor.codigo<<endl;
          cout<<"Contraseña: "<<profesor.contrasena<<endl;
          cout<<"Nombres: "<<profesor.nombres<<endl;
          cout<<"Apellidos: "<<profesor.apellidos<<endl;
          cout<<"DNI: "<<profesor.dni<<endl;
          cout<<"Correo Institucional: "<<profesor.correoInsti<<endl;
          cout<<"Celular: "<<profesor.celular<<endl;
          cout<<"Direccion: "<<profesor.direccion<<endl;
          cout<<"Estado Civil: "<<profesor.estdCiv<<endl;
          cout<<"\n\n";
        }

        getline(mostrar,profesor.codigo);
    }

    mostrar.close();
}

void Menu::modificarUsuarioP()
{
    ifstream lectura;
    ifstream verificador;
    ofstream auxiliar;
    string auxCodigo;
    string codigoModif;
    string auxContra;
    string auxNombres;
    string auxApellidos;
    string auxDNI;
    string auxCorreoInsti;
    string auxCelular;
    string auxDireccion;
    string auxEstdCiv;
    bool encontrado=false;
    bool coincidencia=false;
    bool mismoCodigo=false;
    lectura.open("profe.txt",ios::in);
    verificador.open("profe.txt",ios::in);
    auxiliar.open("auxiliar.txt",ios::out);
    cout<<"\t\t\t\t***Modificar los datos de un usuario***\t\t\t\t\n\n";
    if(lectura.is_open()&&verificador.is_open()&&auxiliar.is_open())
    {
        fflush(stdin);
        cout<<"Ingresa el codigo del usuario que deseas modificar: ";
        cin.ignore(1000000, '\n');
        getline(cin,auxCodigo);

        if(auxCodigo==" ")
        {
            do
            {
                cout<<"codigo de usuario no valido!, intentalo nuevamente: ";
                getline(cin,auxCodigo);
            }
            while(auxCodigo==" ");
        }

        codigoModif=auxCodigo;

        getline(lectura,profesor.codigo);
        while(!lectura.eof())
        {
            getline(lectura,profesor.contrasena);
            getline(lectura,profesor.nombres);
            getline(lectura,profesor.apellidos);
            getline(lectura,profesor.dni);
            getline(lectura,profesor.correoInsti);
            getline(lectura,profesor.celular);
            getline(lectura,profesor.direccion);
            getline(lectura,profesor.estdCiv);

            if(auxCodigo==profesor.codigo)
            {
                encontrado=true;
                mostarRegistroP(codigoModif);

                cout<<"**********************************************";
                cout<<"\n\n";
                cout<<"Ingresa la nueva informacion para el usuario\n\n";
                fflush(stdin);
                cout<<"Ingresa el codigo del usuario: ";
                getline(cin,auxCodigo);
                if(auxCodigo==codigoModif)
                {
                    mismoCodigo=true;
                }
                if(mismoCodigo==false)
                {
                    do
                    {
                        if(auxCodigo==codigoModif)
                        {
                            coincidencia=false;
                            break;
                        }
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

                            if(auxCodigo==profesor.codigo)
                            {
                                coincidencia=true;
                                cout<<"\n\nYa existe un usuario con ese codigo!\n\n";
                                cout<<"El usuario con ese codigo es: "<<profesor.nombres<<"\n\n";
                                cout<<"Ingresa un codigo valido!: ";
                                getline(cin,auxCodigo);

                                if(auxCodigo==" ")
                                {
                                    do
                                    {
                                        cout<<"\ncodigo de usuario no valido!, ";
                                        cout<<"intentalo nuevamente: ";
                                        getline(cin,auxCodigo);
                                    }
                                    while(auxCodigo=="");
                                }
                                break;
                            }

                            getline(verificador,profesor.codigo);
                        }

                        if(verificador.eof()&&auxCodigo!=profesor.codigo)
                        {
                          coincidencia=false;
                        }

                    }
                    while(coincidencia==true);
                }
                cout << "\033[H\033[2J\033[3J";
                cout<<"***Modificar los datos de un usuario***\n\n";
                cout<<"Ingresa el codigo del administrador que deseas modificar: ";
                cout<<codigoModif;
                mostarRegistroP(codigoModif);
                cout<<"**********************************************";
                cout<<"Ingresa la nueva informacion para el usuario\n";
                cout<<"Ingresa el codigo del usuario: ";
                cout<<auxCodigo;
                fflush(stdin);
                cout<<endl  <<  "Contrasena: "; 
                getline(cin,auxContra);
                fflush(stdin);
                cout<<"Nombres: ";
                getline(cin,auxNombres);;
                fflush(stdin);
                cout << endl << "Apellidos: ";
                getline(cin, auxApellidos);
                fflush(stdin);
                cout << endl << "DNI: ";
                getline(cin,auxDNI);
                fflush(stdin);
                cout << endl << "Correo institucional: ";
                getline(cin,auxCorreoInsti) ;
                fflush(stdin);
                cout << endl << "Celular: ";
                getline(cin, auxCelular);
                fflush(stdin);
                cout << endl << "Dirección: ";
                getline(cin,auxDireccion);
                fflush(stdin);
                cout << endl << "Estado Civil: ";
                getline(cin,auxEstdCiv);
                auxiliar<<auxCodigo<<endl<<auxContra<<endl<<auxNombres<<endl<<auxApellidos<<auxDNI<<endl<<auxCorreoInsti<<endl<<auxCelular<<endl<<auxDireccion<<endl<<auxEstdCiv<<endl;
                cout<<"El Registro se ha modificado correctamente.\n\n";
            }


            else
            {

                auxiliar<<profesor.codigo<<endl<<profesor.contrasena<<endl<<profesor.nombres<<endl<<profesor.apellidos<<endl<<profesor.dni<<endl<<endl<<profesor.correoInsti<<endl<<endl<<profesor.celular<<endl<<endl<<profesor.direccion<<endl<<profesor.estdCiv<<endl;
            }


            getline(lectura,profesor.codigo);
        }

    }
    else
    {
        error();
    }

    if(encontrado==false)
    {
        cout<<"\n\nNo se encontro ningun registro con ese codigo!\n\n";
    }
    lectura.close();
    verificador.close();
    auxiliar.close();
    remove("profe.txt");
    rename("auxiliar.txt","profe.txt");
}

void Menu::mostarRegistroA(string codigo)
{

    ifstream mostrar;
    mostrar.open("alumnos.txt",ios::in);
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

        if(codigo==alumno.codigo)
        {
          cout<<"\n\nRegistro Encontrado\n\n";
          cout<<"Código: "<<alumno.codigo<<endl;
          cout<<"Contraseña: "<<alumno.contrasena<<endl;
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

    mostrar.close();
}

void Menu::modificarUsuarioA()
{
    ifstream lectura;
    ifstream verificador;
    ofstream auxiliar;
    string auxCodigo;
    string codigoModif;
    string auxContra;
    string auxNombres;
    string auxApellidos;
    string auxDNI;
    string auxCorreoInsti;
    string auxCelular;
    string auxDireccion;
    string auxEstdCiv;
    bool encontrado=false;
    bool coincidencia=false;
    bool mismoCodigo=false;
    lectura.open("alumnos.txt",ios::in);
    verificador.open("alumnos.txt",ios::in);
    auxiliar.open("auxiliar.txt",ios::out);
    cout<<"\t\t\t\t***Modificar los datos de un usuario***\t\t\t\t\n\n";
    if(lectura.is_open()&&verificador.is_open()&&auxiliar.is_open())
    {
        fflush(stdin);
        cout<<"Ingresa el codigo del usuario que deseas modificar: ";
        cin.ignore(1000000, '\n');
        getline(cin,auxCodigo);

        if(auxCodigo==" ")
        {
            do
            {
                cout<<"codigo de usuario no valido!, intentalo nuevamente: ";
                getline(cin,auxCodigo);
            }
            while(auxCodigo=="");
        }

        codigoModif=auxCodigo;

        getline(lectura,alumno.codigo);
        while(!lectura.eof())
        {
            getline(lectura,alumno.contrasena);
            getline(lectura,alumno.nombres);
            getline(lectura,alumno.apellidos);
            getline(lectura,alumno.dni);
            getline(lectura,alumno.correoInsti);
            getline(lectura,alumno.celular);
            getline(lectura,alumno.direccion);
            getline(lectura,alumno.estdCiv);

            if(auxCodigo==alumno.codigo)
            {
                encontrado=true;
                mostarRegistroA(codigoModif);

                cout<<"**********************************************";
                cout<<"\n\n";
                cout<<"Ingresa la nueva informacion para el usuario\n\n";
                fflush(stdin);
                cout<<"Ingresa el codigo del usuario: ";
                getline(cin,auxCodigo);
                if(auxCodigo==codigoModif)
                {
                    mismoCodigo=true;
                }
                if(mismoCodigo==false)
                {
                    do
                    {
                        if(auxCodigo==codigoModif)
                        {
                            coincidencia=false;
                            break;
                        }
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

                            if(auxCodigo==alumno.codigo)
                            {
                                coincidencia=true;
                                cout<<"\n\nYa existe un usuario con ese codigo!\n\n";
                                cout<<"El usuario con ese codigo es: "<<alumno.nombres<<"\n\n";
                                cout<<"Ingresa un codigo valido!: ";
                                getline(cin,auxCodigo);

                                if(auxCodigo==" ")
                                {
                                    do
                                    {
                                        cout<<"\ncodigo de usuario no valido!, ";
                                        cout<<"intentalo nuevamente: ";
                                        getline(cin,auxCodigo);
                                    }
                                    while(auxCodigo=="");
                                }
                                break;
                            }

                            getline(verificador,alumno.codigo);
                        }

                        if(verificador.eof()&&auxCodigo!=alumno.codigo)
                        {
                            coincidencia=false;
                        }

                    }
                    while(coincidencia==true);
                }
                cout << "\033[H\033[2J\033[3J";
                cout<<"***Modificar los datos de un usuario***\n\n";
                cout<<"Ingresa el codigo del administrador que deseas modificar: ";
                cout<<codigoModif;
                mostarRegistroA(codigoModif);
                cout<<"**********************************************";
                cout<<endl;
                cout<<"Ingresa la nueva informacion para el usuario\n";
                cout<<"Ingresa el codigo del usuario: ";
                cout<<auxCodigo;
                fflush(stdin);
                cout<<endl  <<  "Contrasena: "; 
                getline(cin,auxContra);
                fflush(stdin);
                cout<<"Nombres: ";
                getline(cin,auxNombres);;
                fflush(stdin);
                cout << endl << "Apellidos: ";
                getline(cin, auxApellidos);
                fflush(stdin);
                cout << endl << "DNI: ";
                getline(cin,auxDNI);
                fflush(stdin);
                cout << endl << "Correo institucional: ";
                getline(cin,auxCorreoInsti) ;
                fflush(stdin);
                cout << endl << "Celular: ";
                getline(cin, auxCelular);
                fflush(stdin);
                cout << endl << "Dirección: ";
                getline(cin,auxDireccion);
                fflush(stdin);
                cout << endl << "Estado Civil: ";
                getline(cin,auxEstdCiv);
                auxiliar<<auxCodigo<<endl<<auxContra<<endl<<auxNombres<<endl<<auxApellidos<<auxDNI<<endl<<auxCorreoInsti<<endl<<auxCelular<<endl<<auxDireccion<<endl<<auxEstdCiv<<endl;
                cout<<"El Registro se ha modificado correctamente.\n\n";
            }


            else
            {

                auxiliar<<alumno.codigo<<endl<<alumno.contrasena<<endl<<alumno.nombres<<endl<<alumno.apellidos<<endl<<alumno.dni<<endl<<endl<<alumno.correoInsti<<endl<<endl<<alumno.celular<<endl<<endl<<alumno.direccion<<endl<<alumno.estdCiv<<endl;
            }


            getline(lectura,alumno.codigo);
        }

    }
    else
    {
        error();
    }

    if(encontrado==false)
    {
        cout<<"\n\nNo se encontro ningun registro con ese codigo!\n\n";
    }
    lectura.close();
    verificador.close();
    auxiliar.close();
    remove("alumnos.txt");
    rename("auxiliar.txt","alumnos.txt");
}