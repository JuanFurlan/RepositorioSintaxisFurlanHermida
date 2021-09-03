#include "scanner.h"

int main()
{	
    token=get_token();
    while(token.tipo != FDT)
    {   
        if(token.tipo == CAD)
        {
            printf("Cadena: %s \n",token.buffer);
        }
        if(token.tipo == SEP)
        {
            printf("Separador: %s \n",token.buffer);
        }
    token=get_token();
    }
    printf("Fin de Texto:"); 
    return 0;
}
