#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <cstdio>
#include <ctime>
#include <string.h>
#include <windows.h>
#include <stdio.h>
#include "usuario.h"
using namespace std;

//Constructor de usuario administrativo. Lo usamos en Archivo::creacionDeArchivoUsuario.
Usuario::Usuario(int i){
id=i;
strcpy(nombre,"administrador");
strcpy(apellido,"administrador");
dni=0;
rol=1;
strcpy(contrasenia,"admin123");
estado=true;
}

//Este constructor es usado en archivos, para pasarle dni y contraseņa asi valida si existe.
Usuario::Usuario(int i, char *c){
dni=i;                          //Si es 0, sabemos que el usuario es administrador.
strcpy(contrasenia,c);
}

void Usuario::cargar(){
cout<<"Nombre: ";
cin>>nombre;
cout<<"\nApellido: ";
cin>>apellido;
cout<<"\nDNI: ";
cin>>dni;
cout<<"\nRol: ";
cin>>rol;
cout<<"\nEstablezca contraseņa: ";
cin>>contrasenia;
estado=true;
}

void Usuario::setFechaDeIngreso(){


}

int Usuario::getId(){

return id;
}

Fecha Usuario::getFechaDeIngreso(){

}

bool Usuario::escribirDisco(int p){

}

bool Usuario::leerDisco(int p){

}

const char *Usuario::getContrasenia(){
return contrasenia;
}

int Usuario::getDni(){
return dni;
}
