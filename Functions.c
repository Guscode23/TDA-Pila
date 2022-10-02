#include "Pila.h"
#include "string.h"
//Desarrollo de Primitivas//

//Sumar numeros muy grandes//

/*char* Sumar(const char* num1,const char* num2)
{

    Pila pila1,pila2,pilaSuma;

    CrearPila(&pila1);
    CrearPila(&pila2);
    CrearPila(&pilaSuma);

    int tamNum1=strlen(num1);
    int tamNum2=strlen(num2);
    int restaTams= tamNum1-tamNum2;
    int cantCeros=abs(restaTams);

    bool pilaMenor=restaTams<0;
    bool pila2Menor=!pilaMenor;

    if(pilaMenor)
        apilarCeros(pilaMenor? &pila1 :&pila2,cantCeros);


    apilarNumero(&pila1,num1);
    apilarNumero(&pila2,num2);

    int digito1,digito2,digitoSuma

    while(!PilaVacia(&pila1))
    {



    }


}*/

void CrearPila(Pila *p)
{

}
