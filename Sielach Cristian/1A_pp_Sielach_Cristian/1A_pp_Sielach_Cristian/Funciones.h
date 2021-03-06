typedef struct
{
    int idDuenio;
    char nombre[20];
    char apellido[20];
    long int numeroTarjeta;
    char direccion[50];
    int estado;
}eCliente;

typedef struct
{
    char patente[8];
    int marca;
    int duenio;
    int horaEntrada;
    int estado;
}eAuto;

int menu();
int buscarLibre(eCliente lista[],int tam);
int buscarClientePorId(int id,eCliente lista[],int tam);
void variablesCero(eCliente lista[],int i);
void inicializarVariables(eCliente lista[],int tam);
void alta(eCliente lista[],int tam);
void harcCliente(eCliente lista[],int tam);
void mostrarClientes(eCliente lista[], int tam);
void mostrarCliente(eCliente lista);
int buscarLibreAuto(eAuto lista[],int tam);
void variablesCeroAuto(eAuto lista[],int i);
void inicializarVariablesAutos(eAuto lista[],int tam);
void altaAuto(eAuto lista[],int tamA,eCliente cliente[],int tamC);
void mostrarClientesAutos(eCliente lista[], int tamC,eAuto autos[],int tamA);
void ordenar(eAuto autos[],int tamA);
void harcAuto(eAuto autos[],int tam);
void modificacion(eCliente lista[],int tam);
int bajaAuto(eCliente lista[],int tamC,eAuto autos[],int tamA,int gananciaXmarca[]);
int buscarAutoId(int id,eAuto lista[],int tam);
void maxCantAutos(eCliente lista[],int tamC,eAuto autos[],int tamA);
