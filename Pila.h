#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

#define TAM_PILA 340

typedef struct
{
    char pila[TAM_PILA];
    unsigned tope;

}Tpila;

typedef struct
{
  char nombre[5];
  float stock;

}Tproducto;



//Prototipos de primitivas//

void CrearPila(Pila *pila);
int ponerEnPila(Tpila *p,const void *d,unsigned cantBytes);
bool desapilar(Pila *pila,void* elem,size_t tamElem);
bool verTopeDePila(const Pila* pila,void* elem,size_t tamElem);
bool PilaVacia(const Pila* pila);
int PilaLlena(const Tpila *p,unsigned cantbytes);
void VaciarPila(Pila* pila);
void PonerySacardePila(void);








#endif // PILA_H_INCLUDED
