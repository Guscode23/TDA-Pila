#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

typedef int Pila; //Tipo de dato pila//

//Prototipos de primitivas//

void CrearPila(Pila *pila);
bool apilar(Pila *pila,void* dato,size_t tamElem);
bool desapilar(Pila *pila,void* elem,size_t tamElem);
bool verTopeDePila(const Pila* pila,void* elem,size_t tamElem);
bool PilaVacia(const Pila* pila);
bool PilaLlena(const Pila*pila);
void VaciarPila(Pila* pila);
char* Sumar(const char* num1,const char* num2);








#endif // PILA_H_INCLUDED
