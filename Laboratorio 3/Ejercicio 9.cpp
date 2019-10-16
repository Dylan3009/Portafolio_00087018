#include <iostream>
#include <string>
using namespace std;

enum generos{masculino,femenino};

struct TPersona{
    long carnet;
    string nombre;
	string apellido;
    int edad;
	long numerotel;
	string correo;
    generos genero;
};
typedef struct TPersona Persona;

Persona solicitarPersona(){
    Persona p;
    
    cout << "Carnet: "; cin >> p.carnet;
    cin.ignore();
    cout << "Nombre de la persona: "; getline(cin, p.nombre);
    cout << "Apellido de la persona: "; getline(cin, p.apellido);
    cout << "Edad de la persona: "; cin>>p.edad;
    cout << "Numero de Telefono: "; cin>>p.numerotel;
    cout << "Correo de la persona: "; getline(cin, p.correo);
	cin.ignore();    
   
    bool continuar = true;
    do{
        char opcion = 0;
        cout << "Genero (m=Masculino|f=Femenino): ";
        cin >> opcion;
        switch(opcion){
            case 'm': p.genero = masculino;   continuar = false;
            break;
            case 'f': p.genero = femenino;   continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return p;
}

void mostrarPersona(Persona p){
    cout << "Carnet: " << p.carnet << endl;
    cout << "Nombre: " << p.nombre << endl;
    cout << "Apellido: " << p.apellido << endl;
    cout << "Edad: " << p.edad << endl;
    cout << "Numero de Telefono: " << p.numerotel << endl;
    cout << "Correo: " << p.correo << endl;
   
    cout << "Genero: ";
    switch(p.genero){
        case masculino: cout << "Masculino" << endl;
        break;
        case femenino: cout << "Femenino" << endl;
        break;
    }
}

struct TNodo{
    Persona dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(Persona p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pInicio;
   
    pInicio = nuevo;
}

void insertarFinal(Persona p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = NULL;
   
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void insertarDespuesDe(Persona p) {
    int unCarnet = 0;
    cout << "Carnet de referencia: ";
    cin >> unCarnet;
   
    Nodo *s = pInicio;
   
    while(s != NULL && (s->dato).carnet != unCarnet)
        s = s->sig;
    if(s == NULL){
        cout << "Carnet de Identificacion NO EXISTE" << endl;
        return;
    }
   
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = s->sig;
   
    s->sig = nuevo;
    cout << "Carnet insertado con exito" << endl;
}

void insertarAntesDe(Persona p) {
    int unCarnet = 0;
    cout << "Carnet de referencia: ";
    cin >> unCarnet;
   
    Nodo *s = pInicio, *q = NULL;
   
    while(s != NULL && (s->dato).carnet != unCarnet){
        q = s;
        s = s->sig;
    }
    if(s == NULL){
        cout << "Carnet de Identificacion NO EXISTE" << endl;
        return;
    }
   
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = s;
   
    if(q == NULL)
        pInicio = nuevo;
    else
        q->sig = nuevo;
    cout << "Carnet insertado con exito" << endl;
}

void agregarPersona(){
    Persona p = solicitarPersona();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\t3) Despues de\n\t4) Antes de"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarInicio(p);  continuar = false;
            break;
            case 2: insertarFinal(p);   continuar = false;
            break;
            case 3: insertarDespuesDe(p);   continuar = false;
            break;
            case 4: insertarAntesDe(p);   continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        mostrarPersona(s->dato);
        s = s->sig;
    }
}

void eliminarPersona(){
    int unCarnet = 0;
    cout << "Carnet de referencia: ";
    cin >> unCarnet;
   
    Nodo *p = pInicio, *q = NULL;
   
    while(p != NULL && (p->dato).carnet != unCarnet){
        q = p;
        p = p->sig;
    }
    if(p == NULL){
        cout << "Datos de persona a BORRAR no existe" << endl;
        return;
    }
    if(q == NULL)
        pInicio = p->sig;
    else
        q->sig = p->sig;
    delete(p);
    cout << "Datos de Persona Borrada!" << endl;
}

void actualizarPersona(){
	Nodo *s = pInicio;
	Nodo *actualizar = new Nodo;
	actualizar = s;
	bool buscar1 = false;
	int unCarnet=0;
	cout<<"Ingrese NDI(Numero de identificacion) para actualizar datos:";
	cin>>unCarnet;
	if(s!=NULL){
		while(actualizar!=NULL&&buscar1!=true){
			if((actualizar->dato).carnet== unCarnet){
				cout<<"\nIngrese los nuevos Datos\n";
				s->dato;
				actualizar->dato;
				Persona P = solicitarPersona();
				buscar1 = true;
			}
			actualizar=actualizar->sig;
		}
		if(!buscar1){
			cout<<"\n Datos no encontrados\n\n";
		}
	}else{
		cout<<"\n Los datos se encuentran vacios\n\n";
	}
}

int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;
   
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Personas a la Lista\n\t2) Eliminar Datos de una Persona"
            << "\n\t3) Actualizar Datos de una Persona"
            << "\n\t4) Mostrar todas las Personas\n\t5) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarPersona();
            break;
            case 4: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 2: cout << "Eliminando..." << endl;
                eliminarPersona();
            break;
            case 3: cout << "Actualizando..." << endl;
                actualizarPersona();  
            break;
            case 5: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
	
	
	

