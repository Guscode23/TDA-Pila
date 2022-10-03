#include "Pila.h"
#include "string.h"
//Desarrollo de Primitivas//

//Sumar numeros muy grandes//


void CrearPila(Tpila *p)
{
   p->tope=TAM_PILA;
}

int PilaLlena(const Tpila *p,unsigned cantbytes)
{
    return p->tope < cantbytes+sizeof(unsigned);

}

int ponerEnPila(Tpila *p,const void *d,unsigned cantBytes)
{
    if(p->tope <cantBytes+sizeof(unsigned))
        return 0;

    p->tope-=cantBytes;
    memcpy(p->pila+p->tope,d,cantBytes);
    p->tope-=sizeof(unsigned);
    memcpy(p->pila+p->tope,&cantBytes,sizeof(unsigned));
    return 1;

}


void PonerySacardePila(void)
{

    Tpila pila;
    Tproducto produc;

    CrearPila(&pila);


    while(!PilaLlena(&pila,sizeof(produc))
    {



    }

}





